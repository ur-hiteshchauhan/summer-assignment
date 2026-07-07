//Menu Driven Calculator

#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        printf("Answer = %.2f", a + b);

    else if(choice == 2)
        printf("Answer = %.2f", a - b);

    else if(choice == 3)
        printf("Answer = %.2f", a * b);

    else if(choice == 4)
        printf("Answer = %.2f", a / b);

    else
        printf("Invalid Choice");

    return 0;
}