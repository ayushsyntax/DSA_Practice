#include <iostream>
#include <stack>

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class RevDoublyLinkedList {
public:
    Node* head;

    RevDoublyLinkedList() : head(nullptr) {}

    void append(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    void reverse() {
        std::stack<int> st;
        Node* temp = head;

        // Push all node data onto the stack
        while (temp != nullptr) {
            st.push(temp->data);
            temp = temp->next;
        }

        // Pop from stack to reverse the list
        temp = head;
        while (temp != nullptr) {
            temp->data = st.top();
            st.pop();
            temp = temp->next;
        }
    }
};

int main() {
    RevDoublyLinkedList dll;
    dll.append(1);
    dll.append(2);
    dll.append(3);
    dll.append(4);
    dll.append(5);

    std::cout << "Original list: ";
    dll.display();

    dll.reverse();

    std::cout << "Reversed list: ";
    dll.display();

    return 0;
}
