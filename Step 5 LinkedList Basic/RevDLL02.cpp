#include<bits/stdc++.h>
using namespace std;


class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Solution {
public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Check for empty list or single node
        if (head == NULL || head->next == NULL) {
            return head; // No need to reverse
        }
        
        DLLNode* prev = NULL;
        DLLNode* current = head;

        // Reverse the list
        while (current != NULL) {
            // Swap next and prev pointers for the current node
            prev = current->prev;     // Store the current previous node
            current->prev = current->next; // Reverse the direction of prev
            current->next = prev;     // Reverse the direction of next

            // Move to the next node (which is now current->prev)
            current = current->prev;
        }

        // At the end of the loop, prev will be the new head of the reversed list
        return prev; // Return the new head
    }
};
