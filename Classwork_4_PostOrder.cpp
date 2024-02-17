#include <iostream>

using namespace std;

// Define a structure for a binary tree node
struct TreeNode {
    int value;       // Value stored in the node
    TreeNode* leftChild;   // Pointer to the left child node
    TreeNode* rightChild;  // Pointer to the right child node
};

// Function to create a new node with given value
TreeNode* createTreeNode(int value) {
    // Allocate memory for a new node
    TreeNode* newTreeNode = new TreeNode();
    // Set the value of the new node
    newTreeNode->value = value;
    // Initialize left and right child pointers to null
    newTreeNode->leftChild = newTreeNode->rightChild = nullptr;
    // Return the newly created node
    return newTreeNode;
}

// Function to print nodes in a binary tree in postorder traversal
void printPostorderTraversal(TreeNode* rootNode) {
    // Base case: if the current node is null, return
    if (rootNode == nullptr)
        return;
    // Recursively traverse the left subtree
    printPostorderTraversal(rootNode->leftChild);
    // Recursively traverse the right subtree
    printPostorderTraversal(rootNode->rightChild);
    // Print the value of the current node
    cout << rootNode->value << " ";
}

int main() {
    // Create the root node with value 1
    TreeNode* root = createTreeNode(1);
    // Create left and right child nodes of the root
    root->leftChild = createTreeNode(2);
    root->rightChild = createTreeNode(3);
    // Create a left child node of the left child of the root
    root->leftChild->leftChild = createTreeNode(4);

    // Print the postorder traversal of the tree
    cout << "Postorder traversal of the tree: ";
    printPostorderTraversal(root);
    cout << endl;

    // Free the memory allocated for nodes to avoid memory leaks
    delete root->leftChild->leftChild;
    delete root->leftChild;
    delete root->rightChild;
    delete root;

    return 0;
}
