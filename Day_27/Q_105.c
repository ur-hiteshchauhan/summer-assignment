//Student Record Management System

#include <stdio.h>

int main()
{
    int roll;
    char name[30];
    float marks;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("\n------ Student Record ------\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("Marks       : %.2f\n", marks);

    return 0;
}

/* 

Enter Roll Number: 101
Enter Name: Hitesh
Enter Marks: 88.5

------ Student Record ------
Roll Number : 101
Name        : Hitesh
Marks       : 88.50

*/