#include <stdio.h>

// Structure definition
struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

// Function to print book details (structure passed as argument)
void printBook(struct Book b) {
    printf("\n--- Book Details ---\n");
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book b1;

    // Taking user input
    printf("Enter Book ID: ");
    scanf("%d", &b1.book_id);

    printf("Enter Book Title: ");
    scanf("%s", b1.title);

    printf("Enter Author Name: ");
    scanf("%s", b1.author);

    printf("Enter Book Price: ");
    scanf("%f", &b1.price);

    // Passing structure to function
    printBook(b1);

    return 0;
}
