#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result; // If the tree is empty, return an empty result
        
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> levelNodes;
            
            // Process all nodes at the current level
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front();
                q.pop();
                
                // Add the current node's value to the level's vector
                levelNodes.push_back(node->val);
                
                // Enqueue the left and right children if they exist
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            
            // Add the current level to the result
            result.push_back(levelNodes);
        }
        
        return result;
    }
};

// Helper function to print the result
void printLevelOrder(vector<vector<int>>& result) {
    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example: constructing a binary tree manually
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    
    Solution sol;
    vector<vector<int>> result = sol.levelOrder(root);
    
    // Print the level order traversal
    printLevelOrder(result);
    
    return 0;
}
