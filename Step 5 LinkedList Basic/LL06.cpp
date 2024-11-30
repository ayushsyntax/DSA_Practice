#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    // Insert at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Insert at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Insert at a given position (1-based index)
    void insertAtPosition(int value, int k) {
        if (k <= 0) {
            cout << "Invalid position!" << endl;
            return;
        }
        Node* newNode = new Node(value);
        if (k == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 1; i < k - 1 && temp != nullptr; ++i) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Position out of range" << endl;
            delete newNode;
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    // Display the list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    LinkedList list;

    list.insertAtBeginning(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtPosition(15, 2); // Insert 15 at position 2

    cout << "Linked List: ";
    list.display();

    return 0;
}
