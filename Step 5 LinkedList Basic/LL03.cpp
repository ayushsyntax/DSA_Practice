#include <iostream>
#include <vector>
using namespace std;

// Node structure definition
struct Node {
    int data;           // Data part of the node
    struct Node *next;  // Pointer to the next node
};

// Function to convert an array to a linked list
Node* arrayToLinkedList(const vector<int>& arr) {
    if (arr.empty()) { // Check if the array size is valid
        cout << "Array is empty. No linked list created." << endl;
        return NULL; // Return NULL if the array is empty
    }

    Node* head = new Node; // Allocate memory for the first node
    head->data = arr[0];   // Set the data for the first node
    head->next = NULL;      // Set the next pointer of the first node to NULL
    Node* last = head;      // Initialize last to point to the first node

    // Loop through the remaining elements in the array to create the linked list
    for (size_t i = 1; i < arr.size(); i++) {
        Node* newNode = new Node; // Allocate memory for new node
        newNode->data = arr[i];    // Set the data for the new node
        newNode->next = NULL;       // Set the next pointer of the new node to NULL
        last->next = newNode;       // Link the last node to the new node
        last = newNode;             // Update last to point to the new node
    }
    
    return head; // Return the head of the linked list
}

// Function to remove the head node from the linked list
Node* removeHead(Node* head) {
    if (head == NULL) return head; // Check if the list is empty
    Node* temp = head;             // Store the current head
    head = head->next;             // Move head to the next node
    delete temp;                   // Free the old head node
    return head;                   // Return the new head
}

// Function to print the linked list
void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " "; // Print the data of the current node
        head = head->next;         // Move to the next node
    }
    cout << endl;                  // Print a newline at the end
}

Node* removehead(Node* head)
{
    if (head==NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deletelast(Node* head)
{
    if (head==NULL|| head-> next==NULL) return NULL;
    Node * temp = head;
    while(temp-> next-> next!=NULL)
    {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;


    return head;
}









// Main function
int main() {
    vector<int> arr = {1, 2, 3, 4, 5}; // Example array to create linked list
    Node* head = arrayToLinkedList(arr); // Convert the array to a linked list

    cout << "Linked List before removing head: ";
    print(head); // Print the linked list

    head = removeHead(head); // Remove the head node
    cout << "Linked List after removing head: ";
    print(head); // Print the linked list after removing the head

    // Free remaining nodes (not implemented, but recommended in a complete program)

    return 0; // Indicate successful termination
}
