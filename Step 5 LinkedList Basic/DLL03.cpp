#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1 = nullptr, Node* back1 = nullptr) {
        data = data1;
        next = next1;
        back = back1;
    }
};

Node* convertArr2DLL(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

// Function to delete the node at the beginning of the list
Node* deleteAtBegin(Node* head) {
    if (head == nullptr) return nullptr; // if list is empty, return nullptr

    Node* temp = head;
    head = head->next;
    if (head != nullptr) head->back = nullptr; // update the new head's back pointer
    delete temp;
    return head;
}

// Function to delete the node at the tail of the list
Node* deleteAtTail(Node* head) {
    if (head == nullptr) return nullptr; // if list is empty, return nullptr
    if (head->next == nullptr) { // if list has only one node
        delete head;
        return nullptr;
    }

    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    tail->back->next = nullptr;
    delete tail;
    return head;
}

// Function to delete the node at position k (1-based index)
Node* deleteAtK(Node* head, int k) {
    if (k == 1) return deleteAtBegin(head); // delete at beginning if k is 1

    Node* current = head;
    for (int i = 1; i < k && current != nullptr; i++) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Position out of bounds." << endl;
        return head;
    }

    if (current->next != nullptr) current->next->back = current->back;
    if (current->back != nullptr) current->back->next = current->next;

    delete current;
    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12, 3, 4, 5};
    Node* head = convertArr2DLL(arr);

    cout << "Original List: ";
    print(head);

    head = deleteAtBegin(head);
    cout << "After deleting at beginning: ";
    print(head);

    head = deleteAtTail(head);
    cout << "After deleting at tail: ";
    print(head);

    head = deleteAtK(head, 2);
    cout << "After deleting at position 2: ";
    print(head);

    return 0;
}
