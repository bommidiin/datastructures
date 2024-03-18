#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

// Dynamic Array Class
class DynamicArray {
private:
    vector<int> dynamicArrayData; // Vector to store dynamic array elements

public:
    // Function to insert data into dynamic array
    void insertData(int value) {
        dynamicArrayData.push_back(value); // Add value to the end of the vector
    }

    // Function to display dynamic array elements
    void displayData() {
        cout << "Dynamic Array Elements: ";
        for (int element : dynamicArrayData) { // Loop through each element in the vector
            cout << element << " "; // Print the element
        }
        cout << endl;
    }

    // Function to adjust the size of the dynamic array
    void adjustSize() {
        int newDynamicArraySize;
        cout << "Enter the new size of the array: ";
        cin >> newDynamicArraySize;
        dynamicArrayData.resize(newDynamicArraySize); // Resize the vector to the new size
        cout << "Array resized successfully!" << endl;
    }
};

// Linked List Class
class LinkedList {
private:
    struct ListNode {
        int data;
        ListNode* next;

        ListNode(int val) : data(val), next(nullptr) {}
    };

    ListNode* head;

public:
    LinkedList() : head(nullptr) {}

    // Function to insert data into linked list
    void insertData(int value) {
        ListNode* newNode = new ListNode(value);
        if (!head) { // If list is empty, make the new node the head
            head = newNode;
        } else {
            ListNode* current = head;
            while (current->next) { // Traverse to the end of the list
                current = current->next;
            }
            current->next = newNode; // Insert new node at the end
        }
    }

    // Function to display linked list elements
    void displayData() {
        cout << "Linked List Elements: ";
        ListNode* current = head;
        while (current) { // Traverse the list and print each element
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

// Stack Class
class CustomStack {
private:
    stack<int> stackData; // Stack to store elements

public:
    // Function to push data onto the stack
    void pushData(int value) {
        stackData.push(value); // Push value onto the stack
    }

    // Function to pop data from the stack
    void popData() {
        if (!stackData.empty()) { // Check if stack is not empty before popping
            stackData.pop(); // Pop the top element from the stack
        }
    }

    // Function to display stack elements
    void displayData() {
        cout << "Stack Elements: ";
        stack<int> tempStack = stackData;
        while (!tempStack.empty()) { // Iterate through the stack and print each element
            cout << tempStack.top() << " ";
            tempStack.pop(); // Pop elements from temporary stack
        }
        cout << endl;
    }
};

// Queue Class
class CustomQueue {
private:
    queue<int> queueData; // Queue to store elements

public:
    // Function to enqueue data into the queue
    void enqueueData(int value) {
        queueData.push(value); // Enqueue value into the queue
    }

    // Function to dequeue data from the queue
    void dequeueData() {
        if (!queueData.empty()) { // Check if queue is not empty before dequeuing
            queueData.pop(); // Dequeue the front element from the queue
        }
    }

    // Function to display queue elements
    void displayData() {
        cout << "Queue Elements: ";
        queue<int> tempQueue = queueData;
        while (!tempQueue.empty()) { // Iterate through the queue and print each element
            cout << tempQueue.front() << " ";
            tempQueue.pop(); // Pop elements from temporary queue
        }
        cout << endl;
    }
};

// Binary Tree Class
class BinaryTree {
private:
    struct TreeNode {
        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
    };

    TreeNode* rootNode;

    // Function to insert a node into the binary tree
    TreeNode* insertNode(TreeNode* node, int value) {
        if (!node) {
            return new TreeNode(value); // If node is null, create a new node
        }
        if (value < node->data) {
            node->left = insertNode(node->left, value); // Insert into left subtree
        } else if (value > node->data) {
            node->right = insertNode(node->right, value); // Insert into right subtree
        }
        return node;
    }

    // Function to perform inorder traversal of the binary tree
    void inorderTraversal(TreeNode* node) {
        if (node) {
            inorderTraversal(node->left); // Visit left subtree
            cout << node->data << " "; // Print current node
            inorderTraversal(node->right); // Visit right subtree
        }
    }

public:
    BinaryTree() : rootNode(nullptr) {}

    // Function to insert data into the binary tree
    void insertData(int value) {
        rootNode = insertNode(rootNode, value); // Call insertNode function to insert data
    }

    // Function to display binary tree elements using inorder traversal
    void displayData() {
        cout << "Binary Tree Elements (Inorder traversal): ";
        inorderTraversal(rootNode); // Call inorderTraversal function to print elements
        cout << endl;
    }
};

// Main function
int main() {
    cout << "Welcome to the Dynamic Data Structure Program!" << endl;

    // Declare instances of each data structure class
    DynamicArray dynamicArray;
    LinkedList linkedList;
    CustomStack customStack;
    CustomQueue customQueue;
    BinaryTree binaryTree;

    // Main menu loop
    while (true) {
        cout << "\nChoose a data structure to work with:" << endl;
        cout << "1. Dynamic Array" << endl;
        cout << "2. Linked List" << endl;
        cout << "3. Stack" << endl;
        cout << "4. Queue" << endl;
        cout << "5. Binary Tree" << endl;
        cout << "6. Exit" << endl;

        int userChoice;
        cout << "Enter your choice: ";
        cin >> userChoice;

        switch (userChoice) {
            case 1: {
                int userValue;
                cout << "Enter value to insert into the dynamic array: ";
                cin >> userValue;
                dynamicArray.insertData(userValue); // Call insertData function for dynamic array
                cout << "Value inserted into the dynamic array!" << endl;
                break;
            }
            case 2: {
                int userValue;
                cout << "Enter value to insert into the linked list: ";
                cin >> userValue;
                linkedList.insertData(userValue); // Call insertData function for linked list
                cout << "Value inserted into the linked list!" << endl;
                break;
            }
            case 3: {
                int userValue;
                cout << "Enter value to push onto the stack: ";
                cin >> userValue;
                customStack.pushData(userValue);
                cout << "Value enqueued into the queue!" << endl;
                break;
            }
            case 5: {
                int userValue;
                cout << "Enter value to insert into the binary tree: ";
                cin >> userValue;
                binaryTree.insertData(userValue);
                cout << "Value inserted into the binary tree!" << endl;
                break;
            }
            case 6: {
                cout << "Exiting the program." << endl;
                return 0;
            }
            default:
                cout << "Invalid choice! Please choose again." << endl;
        }
    }

    return 0;
}
