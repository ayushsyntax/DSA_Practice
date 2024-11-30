#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};




class Solution {
public:
    void deleteNode(ListNode* node) {
        // Step 1: Copy the value from the next node to the current node
    node->val = node->next->val;

    // Step 2: Save a pointer to the node we’re going to delete
    ListNode* temp = node->next;

    // Step 3: Bypass the next node by pointing to the one after it
    node->next = node->next->next;

    // Step 4: Delete the unused node
    delete temp;
    }
};