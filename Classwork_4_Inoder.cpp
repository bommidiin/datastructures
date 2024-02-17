#include <iostream>

using namespace std;

// Define a structure for a binary tree node
struct TreeNode {
    int value;       // Data stored in the node
    TreeNode* leftChild;   // Pointer to the left child node
    TreeNode* rightChild;  // Pointer to the right child node
};

// Function to create a new node with given data
TreeNode* createTreeNode(int data) {
    // Allocate memory for a new node
    TreeNode* newNode = new TreeNode();
    // Set the data of the new node
    newNode->value = data;
    // Initialize left and right child pointers to null
    newNode->leftChild = newNode->rightChild = nullptr;
    // Return the newly created node
    return newNode;
}

// Function to print nodes in a binary tree in inorder traversal
void printInorderTraversal(TreeNode* rootNode) {
    // Base case: if the current node is null, return
    if (rootNode == nullptr)
        return;
    // Recursively traverse the left subtree
    printInorderTraversal(rootNode->leftChild);
    // Print the data of the current node
    cout << rootNode->value << " ";
    // Recursively traverse the right subtree
    printInorderTraversal(rootNode->rightChild);
}

int main() {
    // Create the root node with data 1
    TreeNode* root = createTreeNode(1);
    // Create left and right child nodes of the root
    root->leftChild = createTreeNode(2);
    root->rightChild = createTreeNode(3);
    // Create a left child node of the left child of the root
    root->leftChild->leftChild = createTreeNode(4);

    // Print the inorder traversal of the tree
    cout << "Inorder traversal of the tree: ";
    printInorderTraversal(root);
    cout << endl;

    // Free the memory allocated for nodes to avoid memory leaks
    delete root->leftChild->leftChild;
    delete root->leftChild;
    delete root->rightChild;
    delete root;

    return 0;
}
