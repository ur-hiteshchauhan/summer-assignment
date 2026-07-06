//Bank Account System

#include <stdio.h>

int main()
{
    char name[30];
    int accountNo;
    float balance, deposit, withdraw;

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Balance: ");
    scanf("%f", &balance);

    printf("\n1. Deposit\n");
    printf("2. Withdraw\n");

    int choice;
    printf("Enter Choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter Deposit Amount: ");
        scanf("%f", &deposit);

        balance = balance + deposit;
    }
    else if(choice == 2)
    {
        printf("Enter Withdraw Amount: ");
        scanf("%f", &withdraw);

        if(withdraw <= balance)
            balance = balance - withdraw;
        else
            printf("Insufficient Balance\n");
    }

    printf("\nFinal Balance = %.2f", balance);

    return 0;
}