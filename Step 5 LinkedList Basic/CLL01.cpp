#include<iostream>
using namespace std;

class Node{
        public:
        int data;
        Node* next;
        Node(int value)
        {
            data = value;
            next = nullptr;

        }


        
};

class CircularLinkedList {
private:
    Node* head;

public:
    // Constructor to initialize an empty list
    CircularLinkedList() {
        head = nullptr;
    }


    void display() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head); // Traverse until we reach the head again
        cout << endl;
    }

};