#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val):data(val),left(nullptr),right(nullptr) {}
};

// Preorder Traversal (Root, Left, Right)
void PreorderTraversal(Node* root)
{
    if (root == nullptr) return;
    cout << root->data << " ";
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
}

// Inorder Traversal (Left, Root, Right)
void inorder(Node* root)
{
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder Traversal (Left, Right, Root)
void postorder(Node* root)
{
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    // Creating the binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Preorder traversal of the tree: ";
    PreorderTraversal(root);
    cout << endl;

    cout << "Inorder traversal of the tree: ";
    inorder(root);
    cout << endl;

    cout << "Postorder traversal of the tree: ";
    postorder(root);
    cout << endl;

    return 0;
}
