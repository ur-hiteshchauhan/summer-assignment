#include <stdio.h>

int main()
{
    int rows;

    printf("Enter rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++)
    {
        for(char ch = 'A'; ch < 'A' + i; ch++)
            printf("%c", ch);

        for(char ch = 'A' + i - 2; ch >= 'A'; ch--)
            printf("%c", ch);

        printf("\n");
    }

    return 0;
}

/* 
output =

A
ABA
ABCBA
ABCDCBA
ABCDEDCBA

*/