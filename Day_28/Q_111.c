//Ticket Booking System

#include <stdio.h>

int main()
{
    char name[30];
    int seats;
    int price = 200;

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    int total = seats * price;

    printf("\n----- Ticket Details -----\n");
    printf("Name        : %s\n", name);
    printf("Seats       : %d\n", seats);
    printf("Ticket Cost : %d\n", total);

    return 0;
}