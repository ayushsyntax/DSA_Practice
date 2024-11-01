#include <iostream>
#include <cstdlib> // Required for malloc
using namespace std;

// Node structure definition
struct Node {
    int data;           // Data part of the node
    struct Node *next;  // Pointer to the next node
};

// Global pointer to the first node of the linked list
Node* first = NULL; 

// Function to create a linked list from an array
void create(int A[], int n) {
    struct Node *t, *last; // Temporary pointer for new nodes and last node

    // Allocate memory for the first node and initialize it
    first = (struct Node *)malloc(sizeof(struct Node)); // Allocate memory
    first->data = A[0];  // Set the data for the first node
    first->next = NULL;   // Set the next pointer of the first node to NULL
    last = first;         // Initialize last to point to the first node

    // Loop through the remaining elements in the array to create the linked list
    for (int i = 1; i < n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node)); // Allocate memory for new node
        t->data = A[i];      // Set the data for the new node
        t->next = NULL;      // Set the next pointer of the new node to NULL
        last->next = t;      // Link the last node to the new node
        last = t;            // Update last to point to the new node
    }
}

// Function to traverse and display the linked list
void traverse() {
    struct Node *p = first; // Start from the head of the list
    while (p) { // Loop until the end of the list
        cout << p->data << " -> "; // Print the data of the current node
        p = p->next; // Move to the next node
    }
    cout << "nullptr" << endl; // Indicate the end of the list
}

// Function to remove the head node
void removeHead() {
    if (first == NULL) { // Check if the list is empty
        cout << "The linked list is empty. No head to remove." << endl;
        return;
    }

    Node* temp = first; // Store the current head node
    first = first->next; // Move the head pointer to the next node
    delete temp; // Free the memory of the old head node

    cout << "Head removed successfully." << endl; // Confirmation message
}


// Main function to demonstrate linked list creation and traversal
int main() {
    int A[] = {10, 20, 30, 40, 50}; // Example array to create linked list
    int n = sizeof(A) / sizeof(A[0]); // Calculate the number of elements in the array

    create(A, n); // Create the linked list from the array
    cout << "Linked List before removing head: "; // Output message before displaying the list
    traverse(); // Traverse and display the linked list

    removeHead(); // Remove the head node
    cout << "Linked List after removing head: "; // Output message after removing head
    traverse(); // Traverse and display the linked list

    return 0; // Indicate successful termination
}
