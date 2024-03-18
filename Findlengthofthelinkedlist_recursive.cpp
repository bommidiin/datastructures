/*
    The function "calculateLengthRecursive" takes a pointer to the head of the linked list as its parameter.
    In the base case, if the head pointer is nullptr, indicating the end of the list, the function returns 0.
    In the recursive scenario, the function increments the length by 1 and recursively calls itself with the next pointer of the current node.
    This recursive process continues until reaching the base case. Subsequently, the function begins to return and unwind the call stack, incrementing the length by 1 for each encountered node.
    Ultimately, the function returns the total length of the linked list.
*/

#include <iostream>

// Define a struct representing a node in a linked list
struct ListNode {
    int value;         // Data stored in the node
    ListNode* next;    // Pointer to the next node in the list

    // Constructor to initialize a node with given data and next pointer
    ListNode(int new_value) : value(new_value), next(nullptr) {}
};

// Recursive function to determine the length of a linked list
int calculateLengthRecursive(ListNode* head) {
    // Base case: If head is nullptr, the length of the list is 0
    if (head == nullptr) {
        return 0;
    }
    // Recursive case: Increment the length by 1 and call the function with the next node
    return 1 + calculateLengthRecursive(head->next);
}

int main() {
    // Create a linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    // Determine the length of the linked list using recursion
    int listLength = calculateLengthRecursive(head);
    std::cout << "Length of the linked list: " << listLength << std::endl;

    return 0;
}
