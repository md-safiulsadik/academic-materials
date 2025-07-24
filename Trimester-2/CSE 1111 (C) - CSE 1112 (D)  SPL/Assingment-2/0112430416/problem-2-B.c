#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    char title[100];
    char author[100];
    int year;
    char status[20];
};

void addBook(struct Book books[], int *count);
void searchBook(struct Book books[], int count, char title[]);
void updateStatus(struct Book books[], int count, char title[]);
void displayBooks(struct Book books[], int count);

int main() {
    struct Book books[MAX_BOOKS];
    int count = 0;
    int choice;
    char title[100];

    while (1) {
        printf("\nLibrary Management System:\n");
        printf("1. Add a new book\n");
        printf("2. Search for a book by Title\n");
        printf("3. Update a book's availability status\n");
        printf("4. Display all books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        if (choice == 1) {
            addBook(books, &count);
        } else if (choice == 2) {
            printf("Enter book title to search: ");
            gets(title); // use gets to read title
            searchBook(books, count, title);
        } else if (choice == 3) {
            printf("Enter book title to update: ");
            gets(title);
            updateStatus(books, count, title);
        } else if (choice == 4) {
            displayBooks(books, count);
        } else if (choice == 5) {
            printf("Exiting the program.\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

void addBook(struct Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Library is full. Cannot add more books.\n");
        return;
    }

    printf("Enter book title: ");
    gets(books[*count].title);

    printf("Enter author name: ");
    gets(books[*count].author);

    printf("Enter publication year: ");
    scanf("%d", &books[*count].year);
    getchar(); 

    printf("Enter availability status (Available/Checked Out): ");
    gets(books[*count].status);

    (*count)++; 
    printf("Book added successfully.\n");
}

void searchBook(struct Book books[], int count, char title[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Title: %s, Author: %s, Year: %d, Status: %s\n",
                   books[i].title, books[i].author, books[i].year, books[i].status);
            return;
        }
    }
    printf("Book not available.\n");
}

void updateStatus(struct Book books[], int count, char title[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Enter new status (Available/Checked Out): ");
            gets(books[i].status);
            printf("Book status updated successfully.\n");
            return;
        }
    }
    printf("Book not found.\n");
}

void displayBooks(struct Book books[], int count) {
    if (count == 0) {
        printf("No books in the library.\n");
        return;
    }

    printf("\nAvailable Books:\n");
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].status, "Available") == 0) {
            printf("Title: %s, Author: %s, Year: %d, Status: %s\n",
                   books[i].title, books[i].author, books[i].year, books[i].status);
        }
    }

    printf("\nChecked Out Books:\n");
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].status, "Checked Out") == 0) {
            printf("Title: %s, Author: %s, Year: %d, Status: %s\n",
                   books[i].title, books[i].author, books[i].year, books[i].status);
        }
    }
}
