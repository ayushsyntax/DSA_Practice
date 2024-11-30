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

// Function to insert a new node at the beginning of the list
Node* insertAtBegin(Node* head, int data) {
    Node* newNode = new Node(data, head, nullptr);
    if (head != nullptr) head->back = newNode;
    return newNode;
}

// Function to insert a new node at the tail of the list
Node* insertAtTail(Node* head, int data) {
    if (head == nullptr) return new Node(data); // if list is empty, new node becomes head

    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    Node* newNode = new Node(data, nullptr, tail);
    tail->next = newNode;
    return head;
}

// Function to insert a new node at position k (1-based index)
Node* insertAtK(Node* head, int data, int k) {
    if (k == 1) return insertAtBegin(head, data); // insert at beginning if k is 1

    Node* current = head;
    for (int i = 1; i < k - 1 && current != nullptr; i++) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Position out of bounds." << endl;
        return head;
    }

    Node* newNode = new Node(data, current->next, current);
    if (current->next != nullptr) current->next->back = newNode;
    current->next = newNode;
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

    head = insertAtBegin(head, 10);
    cout << "After inserting 10 at beginning: ";
    print(head);

    head = insertAtTail(head, 20);
    cout << "After inserting 20 at tail: ";
    print(head);

    head = insertAtK(head, 15, 3);
    cout << "After inserting 15 at position 3: ";
    print(head);

    return 0;
}
