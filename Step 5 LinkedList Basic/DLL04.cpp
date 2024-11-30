#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int data) {
        this->data = data;
        next = nullptr;
        back = nullptr;
    }
};

// Function to delete a given node from the doubly linked list
void deleteNode(Node*& head, Node* node) {
    if (node == nullptr) return; // Nothing to delete

    // If the node to delete is the head
    if (node == head) {
        head = node->next; // Move head to the next node
        if (head != nullptr) {
            head->back = nullptr; // Update new head's back pointer
        }
    } else {
        // Adjust the previous node's next pointer
        if (node->back != nullptr) {
            node->back->next = node->next;
        }

        // Adjust the next node's back pointer
        if (node->next != nullptr) {
            node->next->back = node->back;
        }
    }

    // Delete the node to free memory
    delete node;
}

// Function to print the list from any given node
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to convert an array to a doubly linked list
Node* arrayToDoublyLinkedList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* current = head;
    for (size_t i = 1; i < arr.size(); i++) {
        Node* newNode = new Node(arr[i]);
        current->next = newNode;
        newNode->back = current;
        current = newNode;
    }
    return head;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};
    Node* head = arrayToDoublyLinkedList(arr);

    cout << "Original List: ";
    printList(head);

    // Deleting the second node (20)
    deleteNode(head, head->next); // Delete the node with value 20

    cout << "After Deleting Node 20: ";
    printList(head);

    // Deleting the last node (40)
    deleteNode(head, head->next->next); // Delete the node with value 40

    cout << "After Deleting Node 40 (Tail): ";
    printList(head);

    // Deleting the head node (10)
    deleteNode(head, head); // Delete the node with value 10

    cout << "After Deleting Node 10 (Head): ";
    printList(head);

    return 0;
}
