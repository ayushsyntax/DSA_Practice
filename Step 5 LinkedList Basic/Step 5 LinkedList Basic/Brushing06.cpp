#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    // Constructor for easy initialization
    Node(int value) : data(value), next(nullptr) {}
};

int main() {
    Node* firstNode = new Node(10);  // Dynamically create a node with data=10

    // Accessing data member using -> operator
    cout << "Data in first node: " << firstNode->data << endl; // Access via pointer

    // Alternative without ->, using (*pointer).member
    cout << "Data using (*pointer).data: " << (*firstNode).data << endl; // Equivalent to firstNode->data

    delete firstNode; // Free allocated memory
    return 0;
}
