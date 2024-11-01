#include <iostream>
using namespace std;

// Node structure definition
struct Node {
    int data;           // Data part of the node
    Node* next;        // Pointer to the next node

    // Constructor to initialize a node
    Node(int val) : data(val), next(nullptr) {}
};

// Global pointer to the head of the linked list
Node* head = nullptr; 

// Function to create a linked list from an array
void create(int arr[], int n) {
    if (n <= 0) return; // If the array is empty, do nothing

    head = new Node(arr[0]); // Allocate memory for the first node
    Node* last = head; // Keep track of the last node

    // Loop through the remaining elements in the array to create the linked list
    for (int i = 1; i < n; i++) {
        Node* newNode = new Node(arr[i]); // Allocate memory for a new node
        last->next = newNode; // Link the last node to the new node
        last = newNode; // Update last to point to the new node
    }
}

// Function to traverse and display the linked list
void traverse() {
    Node* current = head; // Start from the head of the list
    while (current) { // Loop until the end of the list
        cout << current->data << " -> "; // Print the data of the current node
        current = current->next; // Move to the next node
    }
    cout << "nullptr" << endl; // Indicate the end of the list
}

// Function to delete the k-th node from the linked list
Node* deleteK(Node* head, int k) {
    if (head == nullptr) return head; // If the list is empty

    if (k == 1) { // If the head is to be deleted
        Node* temp = head; // Store the current head
        head = head->next; // Move head to the next node
        delete temp; // Free memory of the old head
        return head; // Return the new head
    }

    Node* current = head; // Start from the head
    Node* prev = nullptr; // Initialize previous node
    int cnt = 1; // Counter to track node position

    // Traverse the list to find the k-th node
    while (current != nullptr && cnt < k) {
        prev = current; // Keep track of the previous node
        current = current->next; // Move to the next node
        cnt++; // Increment the counter
    }

    // If the k-th node was found
    if (current != nullptr) {
        prev->next = current->next; // Link previous node to the next of k-th node
        delete current; // Free memory of the k-th node
    } else {
        cout << "The k-th node does not exist." << endl; // If k is greater than the number of nodes
    }

    return head; // Return the head of the modified list
}

// Main function to demonstrate linked list creation, deletion, and traversal
int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Example array to create linked list
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    create(arr, n); // Create the linked list from the array
    cout << "Linked List before deleting k-th node: "; // Output message before displaying the list
    traverse(); // Traverse and display the linked list

    int k = 3; // Specify which node to delete (3rd node in this case)
    head = deleteK(head, k); // Delete the k-th node
    cout << "Linked List after deleting " << k << "-th node: "; // Output message after deletion
    traverse(); // Traverse and display the modified linked list

    // Clean up remaining nodes
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0; // Indicate successful termination
}
