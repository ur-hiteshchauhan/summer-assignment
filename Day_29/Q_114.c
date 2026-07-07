//Menu Driven Array Operations

/* 
it performs operation like 

Display Array
Find Sum
Find Largest Element

*/

#include <stdio.h>

int main()
{
    int n, choice;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\n1. Display Array");
    printf("\n2. Find Sum");
    printf("\n3. Find Largest");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Array:\n");

        for(int i = 0; i < n; i++)
            printf("%d ", arr[i]);
    }
    else if(choice == 2)
    {
        int sum = 0;

        for(int i = 0; i < n; i++)
            sum += arr[i];

        printf("Sum = %d", sum);
    }
    else if(choice == 3)
    {
        int max = arr[0];

        for(int i = 1; i < n; i++)
        {
            if(arr[i] > max)
                max = arr[i];
        }

        printf("Largest = %d", max);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}