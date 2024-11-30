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

    // Insert at the end (helper for testing deletions)
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

    // Delete from the beginning
    void deleteFromBeginning() {
        if (head == nullptr) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Delete from the end
    void deleteFromEnd() {
        if (head == nullptr) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    // Delete from a specific position (1-based index)
    void deleteFromPosition(int k) {
        if (k <= 0 || head == nullptr) {
            cout << "Invalid position or empty list!" << endl;
            return;
        }
        if (k == 1) {
            deleteFromBeginning();
            return;
        }

        Node* temp = head;
        for (int i = 1; i < k - 1 && temp->next != nullptr; ++i) {
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            cout << "Position out of range." << endl;
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
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

    // Insert some nodes
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);

    cout << "Original Linked List: ";
    list.display();

    // Deletion operations
    list.deleteFromBeginning();
    cout << "After deleting from beginning: ";
    list.display();

    list.deleteFromEnd();
    cout << "After deleting from end: ";
    list.display();

    list.deleteFromPosition(2); // Deleting the 2nd node
    cout << "After deleting from position 2: ";
    list.display();

    return 0;
}

