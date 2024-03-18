//
#include <iostream>
using namespace std;

// Definition of a linked list node
class Node {
public:
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list
};

// Insert a new node after the given previous node
void insertAfter(Node* prev_node, int new_data) {
    // Check if the previous node is NULL
    if (prev_node == NULL) {
        cout << "Error: The previous node cannot be NULL" << endl;
        return;
    }
    // Allocate memory for the new node
    Node* new_node = new Node();
    // Set the data of the new node
    new_node->data = new_data;
    // Adjust pointers to insert the new node
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// Function to insert an element at the beginning of the linked list
void push(Node** head_ref, int new_data) {
    // Allocate memory for the new node
    Node* new_node = new Node();
    // Set the data of the new node
    new_node->data = new_data;
    // Adjust pointers to insert the new node at the beginning
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Print the contents of the linked list
void printList(Node* node) {
    // Traverse the linked list and print the data of each node
    while (node != NULL) {
        cout << " " << node->data;
        node = node->next;
    }
    cout << endl; // Print a newline character after printing the list
}

int main() {
    // Start with an empty list
    Node* head = NULL;

    // Insert elements at the beginning
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);

    // Print the initial linked list
    cout << "Created Linked list:";
    printList(head);

    // Insert 1 after 2
    insertAfter(head->next, 1);

    // Print the updated linked list
    cout << "After inserting 1 after 2:";
    printList(head);

    return 0;
}
