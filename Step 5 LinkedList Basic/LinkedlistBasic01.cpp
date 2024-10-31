#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    // Constructors
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to convert an array to a linked list
Node* convertArr2LL(vector<int> &arr) {
    if (arr.empty()) return nullptr; // Handle empty array case

    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Function to calculate the length of the linked list
int lengthOfLL(Node* head) {
    int cnt = 0;
    Node* temp = head;
    while (temp) {
        temp = temp->next;
        cnt++;
    }
    return cnt; // Return the count of nodes
}

// Function to check if a value is present in the linked list
int checkIfPresent(Node* head, int val) {
    Node* temp = head;
    while (temp) {
        if (temp->data == val)
            return 1; // Return 1 if value is found
        temp = temp->next;
    }
    return 0; // Return 0 if value is not found
}

int main() {
    vector<int> arr = {2, 5, 7, 3};

    // Convert array to linked list
    Node* head = convertArr2LL(arr);

    // Display linked list
    Node* temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;

    // Calculate and display the length of the linked list
    cout << "Length of Linked List: " << lengthOfLL(head) << endl;

    // Check if a value is present in the linked list
    int valueToCheck = 4;
    cout << "Is " << valueToCheck << " present? " 
         << (checkIfPresent(head, valueToCheck) ? "Yes" : "No") << endl;

    return 0;
}
