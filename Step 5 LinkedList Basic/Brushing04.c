#include <stdio.h>
#include <stdlib.h>

// Defining a structure for a Node
struct Node {
    int data;          // Member to hold the data value of the node
    struct Node *next; // Pointer to the next node in the linked list
};

// Explanation of the Node structure
/*
    The 'struct Node' serves as a template for creating individual nodes in a linked list.
    Each node consists of two main components:
    
    1. **Data**: This is the information or value that the node stores (e.g., an integer, character, etc.).
    
    2. **Pointer (next)**: This is a reference to the next node in the sequence. It allows nodes to be linked together,
       forming a chain. If it's the last node, this pointer will typically be NULL, indicating the end of the list.

    Nodes are essential for dynamic data structures like linked lists, where the size can change during execution.
    Each node points to the next node, enabling traversal through the structure.
*/

int main() {
    // Creating an instance of a Node
    struct Node *firstNode = (struct Node *)malloc(sizeof(struct Node)); // Allocating memory for a node
    firstNode->data = 10;  // Setting the data value for the first node
    firstNode->next = NULL; // Initially, this is the only node, so next is NULL

    // Displaying the data in the node
    printf("Data in first node: %d\n", firstNode->data);

    // Freeing the allocated memory
    free(firstNode);

    return 0; // Return statement indicating successful completion of the program
}
