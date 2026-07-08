//Complete Mini Project using Arrays, Strings and Functions

#include <stdio.h>

void display(int roll[], char name[][20], float marks[], int n)
{
    printf("\n------ Student Records ------\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll  : %d\n", roll[i]);
        printf("Name  : %s\n", name[i]);
        printf("Marks : %.2f\n", marks[i]);
    }
}

int main()
{
    int n = 3;

    int roll[3];
    char name[3][20];
    float marks[3];

    printf("Enter details of 3 students:\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    display(roll, name, marks, n);

    return 0;
}