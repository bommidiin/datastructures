/*Explanation:

    To keep track of the number of nodes encountered, we initialize a variable 'nodeCount' to 0.
    Traversal of the linked list commences from the head node, with a pointer 'currentPointer' initialized to the head.
    While the current node is not nullptr (indicating the end of the list), we increment 'nodeCount' and move 'currentPointer' to the next node.
    Upon completing the traversal of the entire list, the final value of 'nodeCount' reflects the length of the linked list, which is then returned.
*/


#include <iostream>

// Define a struct representing a node in a linked list
struct ListNode {
    int value;         // Data stored in the node
    ListNode* next;    // Pointer to the next node in the list

    // Constructor to initialize a node with given data and next pointer
    ListNode(int new_value) : value(new_value), next(nullptr) {}
};

// Function to determine the length of a linked list iteratively
int calculateLengthIterative(ListNode* head) {
    int nodeCount = 0;          // Initialize nodeCount to 0
    ListNode* currentPointer = head; // Start traversal from the head of the list

    // Traverse the list while incrementing nodeCount for each encountered node
    while (currentPointer != nullptr) {
        nodeCount++;
        currentPointer = currentPointer->next; // Move to the next node
    }
    return nodeCount; // Return the nodeCount, representing the length of the list
}

int main() {
    // Create a linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    // Determine the length of the linked list
    int listLength = calculateLengthIterative(head);
    std::cout << "Length of the linked list: " << listLength << std::endl;

    return 0;
}
