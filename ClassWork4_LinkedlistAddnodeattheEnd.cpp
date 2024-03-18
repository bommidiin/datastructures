#include <iostream> // Include the input/output stream library for basic I/O operations
using namespace std;

// Define a class representing a node in a linked list
class Node {
public:
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list

    // Constructor to initialize a node with given data and next pointer
    Node(int new_data) : data(new_data), next(nullptr) {}
};

// Function to append a new node at the end of the linked list
void append(Node** head_ref, int new_data) {
    // 1. Allocate memory for the new node
    Node* new_node = new Node(new_data);

    // Pointer to traverse the list//
    Node* last = *head_ref;

    // 2. Assign the data to the new node
    new_node->data = new_data;

    // 3. Set the next pointer of the new node as NULL
    new_node->next = NULL;

    // 4. If the list is empty, make the new node the head
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    // 5. Traverse until the last node
    while (last->next != NULL) {
        last = last->next;
    }

    // 6. Make the next pointer of the last node point to the new node
    last->next = new_node;
    return;
}

// Function to print elements of the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " "; // Print the data of the current node
        current = current->next;      // Move to the next node
    }
    cout << endl; // Print a newline character after printing the list
}

int main() {
    // Start with an empty list
    Node* head = NULL;

    // Append some elements to the end
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);

    // Print the linked list
    cout << "Linked list after appending: ";
    printList(head);

    return 0;
}
