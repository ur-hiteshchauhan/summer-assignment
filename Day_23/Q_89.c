#include <stdio.h>

int main()
{
    char str[100];
    int count;

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        count = 0;

        for(int j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
                count++;
        }

        if(count == 1)
        {
            printf("First Non-Repeating Character = %c", str[i]);
            break;
        }
    }

    return 0;
}