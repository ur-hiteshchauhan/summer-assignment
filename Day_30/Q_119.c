//Mini Employee Management System

#include <stdio.h>

int main()
{
    int id[3];
    char name[3][20];
    float salary[3];

    printf("Enter details of 3 employees:\n");

    for(int i = 0; i < 3; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &id[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Salary: ");
        scanf("%f", &salary[i]);
    }

    printf("\n------ Employee Details ------\n");

    for(int i = 0; i < 3; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("ID     : %d\n", id[i]);
        printf("Name   : %s\n", name[i]);
        printf("Salary : %.2f\n", salary[i]);
    }

    return 0;
}