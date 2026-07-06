//Library Management System

#include <stdio.h>

int main()
{
    int bookId;
    char bookName[30];
    char author[30];

    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Name: ");
    scanf("%s", bookName);

    printf("Enter Author Name: ");
    scanf("%s", author);

    printf("\n----- Library Record -----\n");
    printf("Book ID    : %d\n", bookId);
    printf("Book Name  : %s\n", bookName);
    printf("Author     : %s\n", author);

    return 0;
}