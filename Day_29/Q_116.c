//Inventory Management System

#include <stdio.h>

int main()
{
    int id, quantity;
    char name[30];
    float price, total;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    printf("Enter Product Name: ");
    scanf("%s", name);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price: ");
    scanf("%f", &price);

    total = quantity * price;

    printf("\n------ Inventory ------\n");
    printf("Product ID   : %d\n", id);
    printf("Product Name : %s\n", name);
    printf("Quantity     : %d\n", quantity);
    printf("Price        : %.2f\n", price);
    printf("Total Cost   : %.2f\n", total);

    return 0;
}