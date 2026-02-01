#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 100

typedef struct {
    int id;
    char title[100];
    char author[100];
    int year;
} Book;

void addBook(Book books[], int *count) {
    printf("Enter Book ID: ");
    scanf("%d", &books[*count].id);
    getchar();
    printf("Enter Title: ");
    fgets(books[*count].title, sizeof(books[*count].title), stdin);
    books[*count].title[strcspn(books[*count].title, "\n")] = '\0';
    printf("Enter Author: ");
    fgets(books[*count].author, sizeof(books[*count].author), stdin);
    books[*count].author[strcspn(books[*count].author, "\n")] = '\0';
    printf("Enter Year: ");
    scanf("%d", &books[*count].year);
    (*count)++;
    printf("\nBook added successfully!\n");
}

void searchBook(Book books[], int count, char title[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Book ID: %d\nTitle: %s\nAuthor: %s\nYear: %d\n",
                   books[i].id, books[i].title, books[i].author, books[i].year);
            return;
        }
    }
    printf("Book not found.\n");
}

void displayBooks(Book books[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Book ID: %d\nTitle: %s\nAuthor: %s\nYear: %d\n\n",
               books[i].id, books[i].title, books[i].author, books[i].year);
    }
}

int main() {
    Book books[MAX_BOOKS];
    int count = 0, option;
    char searchTitle[100];

    while (1) {
        printf("\nChoose an option:\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Display Books\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);
        getchar(); // เคลียร์ buffer

        if (option == 1) {
            addBook(books, &count);
        } else if (option == 2) {
            printf("Enter Title to Search: ");
            fgets(searchTitle, sizeof(searchTitle), stdin);
            searchTitle[strcspn(searchTitle, "\n")] = '\0';
            searchBook(books, count, searchTitle);
        } else if (option == 3) {
            displayBooks(books, count);
        } else if (option == 4) {
            printf("Exiting program...\n");
            break; // ✅ ออกจาก while loop
        } else {
            printf("Invalid option. Please try again.\n");
        }
    }
    return 0;
}