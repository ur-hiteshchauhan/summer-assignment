#include <stdio.h>

int main()
{
    int rows;

    printf("Enter rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; j++)
            printf("%d", j);

        for(int j = i - 1; j >= 1; j--)
            printf("%d", j);

        printf("\n");
    }

    return 0;
}
/* 
output =

1
121
12321
1234321
123454321

*/