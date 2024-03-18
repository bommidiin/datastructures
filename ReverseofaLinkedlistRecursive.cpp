/*
    The function reverseListRecursively takes the head of a linked list as input and returns the head of the reversed list.
    It includes a base case: if the list is empty or contains only one node, it returns the head unchanged.
    Otherwise, it recursively reverses the remaining list starting from the second node.
    When the recursion reaches the last node, it adjusts the pointers to reverse the link for each node.
    Finally, it returns the new head of the reversed list, corresponding to the last node of the original list.
*/

#include <iostream>

// Define a struct representing a node in a linked list
struct ListNode {
    int value;         // Data stored in the node
    ListNode* next;    // Pointer to the next node in the list

    // Constructor to initialize a node with given data and next pointer
    ListNode(int new_value) : value(new_value), next(nullptr) {}
};

// Function to reverse a linked list recursively
ListNode* reverseListRecursively(ListNode* head) {
    // Base case: if the list is empty or contains only one node
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Reverse the remaining list starting from the second node
    ListNode* reversedList = reverseListRecursively(head->next);

    // Adjust pointers to reverse the link for the current node
    head->next->next = head;
    head->next = nullptr;

    // Return the new head of the reversed list
    return reversedList;
}

// Function to print elements of the linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->value << " "; // Print the data of the current node
        current = current->next;             // Move to the next node
    }
    std::cout << std::endl; // Print a newline character after printing the list
}

int main() {
    // Create a linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    std::cout << "Original linked list: ";
    printList(head);

    // Reverse the linked list recursively
    head = reverseListRecursively(head);

    std::cout << "Reversed linked list: ";
    printList(head);

    return 0;
}
