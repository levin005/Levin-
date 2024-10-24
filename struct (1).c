#include <stdio.h>


struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[14]; 
    float price;
};

int main() {
    // Declare and initialize a variable of type 'book'
    struct book myBook = {
        "Introduction to C Programming",
        "John Smith",
        2022,
        "9780131103627",
        49.99
    };

    
    printf("Book Details:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);

    
    printf("\nEnter the following details for a new book:\n");

    
    printf("Title: ");
    fgets(myBook.title, sizeof(myBook.title), stdin);
    
    printf("Author: ");
    fgets(myBook.author, sizeof(myBook.author), stdin);

    printf("Publication Year: ");
    scanf("%d", &myBook.publication_year);

    
    while(getchar() != '\n'); 

    printf("ISBN: ");
    fgets(myBook.ISBN, sizeof(myBook.ISBN), stdin);

    printf("Price: ");
    scanf("%f", &myBook.price);

    printf("\nUpdated Book Details:\n");
    printf("Title: %s", myBook.title);
    printf("Author: %s", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);

    return 0;
}