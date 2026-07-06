//Contact Management System

#include <stdio.h>

int main()
{
    char name[30];
    char phone[15];
    char email[40];

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Phone Number: ");
    scanf("%s", phone);

    printf("Enter Email: ");
    scanf("%s", email);

    printf("\n----- Contact Details -----\n");
    printf("Name  : %s\n", name);
    printf("Phone : %s\n", phone);
    printf("Email : %s\n", email);

    return 0;
}