#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// BookNode record
struct BookNode {
    int book_id;
    char title[50];
    char author[50];
    float price;
    struct BookNode *next;
};

// Function prototypes
struct BookNode *CreateBookList(const int book_id, const char title[], const char author[], const float price);
void PrintBookNode(const struct BookNode *head, const char *comment);
void PrintList(struct BookNode *list);
struct BookNode *AddBook(struct BookNode *head);
void Menu(struct BookNode *head, struct BookNode *add);

// Creating a book node
struct BookNode *CreateBookList(const int book_id, const char title[], const char author[], const float price) {
    struct BookNode *newBook = NULL;
    int size, asize, c;

    newBook = malloc(sizeof(struct BookNode));

    if (newBook != NULL) {
        size = strlen(title);
        asize = strlen(author);
        newBook->next = NULL;
        newBook->book_id = book_id;
        newBook->price = price;

        for (c = 0; c < size; c++) {
            newBook->title[c] = title[c];
        }
        for (c = 0; c < asize; c++) {
            newBook->author[c] = author[c];
        }

        printf("New book at %p\n", (void *)newBook);
    }

    return newBook;
}

// Printing book details
void PrintBookNode(const struct BookNode *head, const char *comment) {
    if (head == NULL) {
        printf("%s is NULL\n", comment);
    } else {
        printf("Book ID: %d \nBook Title: %s \nBook Author: %s \nBook Price: %.2f \n",
               head->book_id, head->title, head->author, head->price);
    }
}

// Printing list details
void PrintList(struct BookNode *list) {
    if (list == NULL) {
        printf("List is NULL\n");
    } else {
        printf("Book ID: %d\n Book Address: %p\n", list->book_id, (void *)list, (void *)list->next);
    }
}

// Adding a new book to the list
struct BookNode *AddBook(struct BookNode *head) {
    struct BookNode *add = head;
    int book_ID;
    char title[50];
    char author[50];
    float cost;

    //system("clear"); // Change 'cls' to 'clear' for UNIX-like systems
    printf("Enter Book ID: \n");
    scanf("%d", &book_ID);
    printf("\nEnter Book Title\n");
    scanf("%s", title);
    printf("\nEnter Book Author\n");
    scanf("%s", author);
    printf("\nEnter Book Price: \n");
    scanf("%f", &cost);

    if (head == NULL) {
        head = CreateBookList(book_ID, title, author, cost);
        if (head != NULL) {
            add = head;
        }
    } else {
        add->next = CreateBookList(book_ID, title, author, cost);
        if (add->next != NULL) {
            add = add->next;
        }
    }

    PrintList(head);
    printf("\nPress enter to continue");
    getchar(); // Use getchar instead of getch
    return head;
}

// Menu function
void Menu(struct BookNode *head, struct BookNode *add) {
  //  system("clear"); // Change 'cls' to 'clear' for UNIX-like systems
    int choice;
    printf("Welcome to the program\n");
    printf("1 to Add book\n");
    printf("2 to List book\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            head = AddBook(head);
            Menu(head, add);
            break;
        case 2:
            PrintList(head);
            printf("Press enter to continue\n");
            getchar(); // Use getchar instead of getch
            Menu(head, add);
            break;
    }
}

int main() {
    struct BookNode *head = NULL;
    Menu(head, NULL);
    return 0;
}

