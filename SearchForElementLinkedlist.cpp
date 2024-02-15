/*
Iterative Approach:

The iterative method utilizes a loop to sequentially navigate through the linked list. It systematically compares the value of each node with the target element until a match is found or the end of the list is reached. Upon finding a match, the method returns the node containing the target element; otherwise, it returns nullptr, indicating the absence of the element in the list. While the iterative approach avoids additional function call overhead, thereby enhancing memory efficiency for large lists, it may involve more code and is generally considered less elegant compared to the recursive approach.

Recursive Approach:

Contrasting the iterative method, the recursive approach breaks down the problem into smaller sub-problems, invoking the search function recursively on each subsequent node. The base case occurs when the end of the list is reached (i.e., the current node is nullptr), leading to the return of nullptr. Comparisons are made between the value of the current node and the target element, and if a match is found, the node is returned. Despite often resulting in more concise and elegant code, especially for recursion-friendly problems, the recursive method may incur additional overhead due to function calls. This overhead can potentially result in stack overflow errors, particularly for lengthy lists or deeply nested function calls.

Comparison:

Both methods share the common goal of locating an element within a linked list. The iterative method typically involves less memory overhead and may be more efficient for larger lists. On the other hand, the recursive method often yields code that is more succinct and readable. However, it carries the risk of stack overflow for very large or deeply nested lists.

In conclusion, the choice between iterative and recursive methods depends on factors such as code clarity, efficiency, and the specific requirements of the given problem.
*/


#include <iostream>

// Define a struct representing a node in a linked list
struct ListNode {
    int value;         // Data stored in the node
    ListNode* next;    // Pointer to the next node in the list

    // Constructor to initialize a node with given data and next pointer
    ListNode(int new_value) : value(new_value), next(nullptr) {}
};

// Function to search for an element in a linked list iteratively
ListNode* iterativeSearch(ListNode* head, int target) {
    ListNode* current_node = head;
    
    // Iterate through the linked list
    while (current_node != nullptr) {
        // Check if the current node's value matches the target
        if (current_node->value == target) {
            return current_node; // Element found, return the node
        }
        current_node = current_node->next; // Move to the next node
    }
    
    return nullptr; // Element not found
}

// Function to search for an element in a linked list recursively
ListNode* recursiveSearch(ListNode* head, int target) {
    // Base case: reached the end of the list
    if (head == nullptr) {
        return nullptr;
    }
    
    // Check if the current node's value matches the target
    if (head->value == target) {
        return head; // Element found, return the node
    }
    
    // Recursive call on the next node
    return recursiveSearch(head->next, target);
}

int main() {
    // Create a linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    // Search for elements using the iterative approach
    int target1 = 3;
    ListNode* resultIterative = iterativeSearch(head, target1);
    if (resultIterative != nullptr) {
        std::cout << "Element " << target1 << " found using iterative approach." << std::endl;
    } else {
        std::cout << "Element " << target1 << " not found using iterative approach." << std::endl;
    }

    // Search for elements using the recursive approach
    int target2 = 5;
    ListNode* resultRecursive = recursiveSearch(head, target2);
    if (resultRecursive != nullptr) {
        std::cout << "Element " << target2 << " found using recursive approach." << std::endl;
    } else {
        std::cout << "Element " << target2 << " not found using recursive approach." << std::endl;
    }

    return 0;
}
