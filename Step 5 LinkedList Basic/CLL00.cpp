#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node() {
        next = nullptr;
    }

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

Node* Head = nullptr;  // Declare Head globally

// Function to display the list iteratively
void Display(Node* P) {
    if (P == nullptr) return;  // If the list is empty, do nothing
    Node* temp = P;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != P);  // Stop when we come back to the head
    cout << endl;
}

// Recursive display function
void DisplayRecu(Node* P, bool& flag) {
    if (P == nullptr || (P == Head && flag == false)) return;  // Base case: stop if we've come back to head
    cout << P->data << " ";
    flag = false;  // Set flag to false after printing the first node
    DisplayRecu(P->next, flag);
}

int main() {
    // Insert nodes into the circular linked list
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);

    // Creating circular links
    Head = n1;  // Head points to the first node
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = Head;  // Closing the loop (circular list)

    // Display list iteratively
    cout << "Iterative Display: ";
    Display(Head);

    // Display list recursively
    bool flag = true;
    cout << "Recursive Display: ";
    DisplayRecu(Head, flag);
    cout << endl;

    return 0;
}
