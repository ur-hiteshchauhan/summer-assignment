#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[n1];

    printf("Enter first sorted array:\n");
    for(int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int b[n2];

    printf("Enter second sorted array:\n");
    for(int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    int i = 0, j = 0;

    printf("Merged Array:\n");

    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
            printf("%d ", a[i++]);
        else
            printf("%d ", b[j++]);
    }

    while(i < n1)
        printf("%d ", a[i++]);

    while(j < n2)
        printf("%d ", b[j++]);

    return 0;
}

/* 

Array 1 : 1 3 5
Array 2 : 2 4 6

Output:
1 2 3 4 5 6

*/