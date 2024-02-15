/*
    The function reverseList iteratively takes the head of a linked list as input and returns the head of the reversed list.
    It initializes three pointers: "prev", "current", and "next". "prev" starts as nullptr, "current" starts as the head of the list, and "next" starts as nullptr.
    The function iterates through the list, reversing the links between nodes. At each iteration, it updates "next" to store the next node, sets the next pointer of the current node to "prev", and advances "prev" and "current" pointers.
    After traversing the entire list, "prev" points to the new head of the reversed list, so the function returns "prev".
*/

#include <iostream>

// Define a struct representing a node in a linked list
struct ListNode {
    int value;         // Data stored in the node
    ListNode* next;    // Pointer to the next node in the list

    // Constructor to initialize a node with given data and next pointer
    ListNode(int new_value) : value(new_value), next(nullptr) {}
};

// Function to reverse a linked list iteratively
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;   // Pointer to the previous node, initially nullptr
    ListNode* current = head;   // Pointer to the current node, initially the head
    ListNode* next = nullptr;   // Pointer to the next node, initially nullptr

    // Traverse the list, reversing the links
    while (current != nullptr) {
        next = current->next;   // Store the next node
        current->next = prev;   // Reverse the link

        // Move pointers one step forward for the next iteration
        prev = current;
        current = next;
    }

    // After the loop, 'prev' points to the new head of the reversed list
    return prev;
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

    // Reverse the linked list
    head = reverseList(head);

    std::cout << "Reversed linked list: ";
    printList(head);

    return 0;
}
