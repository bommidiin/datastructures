
#include <stdio.h>
#include <stdlib.h>

//BookNode record
struct BookNode{
    int book_id;
    char title[50];
    char author[50];
    float price;
    struct BookNode *next;
};

struct BookNode *CreateBookList(const int book_id, const char title[], const char author[], const float price){//creating a book node
    struct BookNode *newBook = NULL;
    int size, asize, c;//declaration of variables
        newBook = malloc(sizeof(struct BookNode));//memory allocation
            if (newBook != NULL){
                size = strlen(title);//length of the string is found
                asize = strlen(author);
                newBook -> next = NULL; //transferring variables to the new node
                newBook -> book_id = book_id;
                newBook -> price = price;
                    for (c = 0 ; c < size ; c++){
                        newBook -> title[c] = title[c];
                    }
                    for (c = 0 ; c < size ; c++){
                        newBook -> author[c] = author[c];
                    }
                printf("New book at %p\n");
            }
    return newBook;//returning pointer
}

int main() {
    struct BookNode *head = NULL; 
    Menu(head);
    return 0;
}


void PrintBookNode(const struct BookNode *head, const char *comment){
    if (head == NULL){
        printf("%s is NULL\n", comment);
    }
    else{
        printf("Book  ID: %d \nBook Title: %s \nBook Author: %s \nBook Price: %.2f \n", head->book_id, head->title, head->author, head->price);//printing the book s
    }
}

void PrintList(struct BookNode *list){
    if (list = NULL){
        printf("File is NULL\n");
    }
    else{
        printf("Book ID: %d\n Book Address: %p\n", list->book_id, list, list->next);//printing the book ID and address
    }
}

struct BookNode *AddBook(struct BookNode *head){ //adding a new book to the list
    struct BookNode *add = head;
    int book_ID;
    char title[50];
    char author[50];
    float cost;
        system("cls");
        printf("Enter Book ID: \n");
        scanf("%d", &book_ID);
        printf("\nEnter Book Title\n");
        scanf("%s", title);
        printf("\nEnter Book Author\n");
        scanf("%s", author);
        printf("\nEnter Book Price: \n");
        scanf("%f", &cost);
            if (head = NULL){
                head = CreateBookList(book_ID, title, author, cost);
                if (head != NULL){
                    add = head;
                }
            }
            else{
                add -> next = CreateBookList(book_ID, title, author, cost);
                if (add -> next!= NULL){
                    add = add -> next;
                }
            }
        PrintList(head);
        printf("\nPress enter to continue");
        getch();
    return head;
};

void Menu (struct BookNode *head, struct BookNode *add)
{
    system("cls");
    int choice;
        printf("Welcome to the program\n");
        printf("1 to Add book\n");
        printf("2 to List book\n");
        scanf ("%d",&choice);
            switch(choice){
                case 1:
                    head = AddBook(head);
                    Menu(head, add);
                    break;
                case 2:
                    PrintList(head);
                    printf ("Press enter to continue\n");
                    getch();
                    Menu(head,add);
                    break;
            }
}
