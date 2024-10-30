/*Node Struct: Each node has an int data for storing the data and a Node* next pointer to the next node.
insertAtBeginning Function: Inserts a new node at the start of the list.
insertAtEnd Function: Appends a new node at the end of the list.
deleteNode Function: Deletes a node with a given key.
displayList Function: Traverses and prints the list.*/



#include <iostream>
using namespace std;

// Define a structure for a node in the linked list
struct Node {
    int data;       // Data part of the node
    Node* next;     // Pointer to the next node in the list
};

// Function to insert a new node at the beginning of the list
void insertAtBeginning(Node** head, int newData) {
    Node* newNode = new Node();  // Allocate a new node
    newNode->data = newData;     // Set data
    newNode->next = *head;       // Link the new node to the current head
    *head = newNode;             // Update head to the new node
}

// Function to insert a new node at the end of the list
void insertAtEnd(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;  // Make the new node the head if the list is empty
        return;
    }

    Node* last = *head;
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = newNode;
}

// Function to delete a node with a specific key
void deleteNode(Node** head, int key) {
    Node* temp = *head;
    Node* prev = nullptr;

    // If the head node itself holds the key
    if (temp != nullptr && temp->data == key) {
        *head = temp->next;  // Change head
        delete temp;          // Free old head
        return;
    }

    // Search for the key to be deleted
    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the key was not present in the list
    if (temp == nullptr) return;

    prev->next = temp->next;  // Unlink the node
    delete temp;              // Free memory
}

// Function to display the contents of the list
void displayList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    Node* head = nullptr;  // Initialize an empty list

    insertAtEnd(&head, 10);
    insertAtBeginning(&head, 5);
    insertAtEnd(&head, 15);
    insertAtBeginning(&head, 1);

    cout << "Linked List: ";
    displayList(head);

    deleteNode(&head, 10);
    cout << "Linked List after deleting 10: ";
    displayList(head);

    return 0;
}
