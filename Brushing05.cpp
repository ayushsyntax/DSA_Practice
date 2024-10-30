#include <iostream>
using namespace std;

// Defining a structure for a Node in a linked list
struct Node {
    int data;          // Member to hold the data value of the node
    Node* next;        // Pointer to the next node in the linked list

    // Constructor to easily initialize the node
    Node(int value) : data(value), next(nullptr) {}
};

// Explanation of the Node structure
/*
    The 'struct Node' serves as a blueprint for each node in a linked list. 

    Components:
    1. **Data (int data)**: This is the actual data the node will hold, in this case, an integer.
    
    2. **Pointer (Node* next)**: This pointer points to the next node in the linked list. 
       When there’s no next node (end of the list), 'next' is set to nullptr.

    This Node structure enables creating a dynamic linked list where each node can point to another, 
    allowing for efficient insertion, deletion, and traversal through the list.
*/

int main() {
    // Creating the first node with data value 10
    Node* firstNode = new Node(10); // Dynamically allocating memory for the first node
    cout << "Data in first node: " << firstNode->data << endl;

    // Memory cleanup
    delete firstNode; // Deleting the dynamically allocated node to prevent memory leaks

    return 0; // Return statement indicating successful completion of the program
}
