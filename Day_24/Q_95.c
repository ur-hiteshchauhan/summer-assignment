#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, max = 0;

    printf("Enter sentence: ");
    scanf("%[^\n]", str);

    for(int i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            if(length > max)
                max = length;

            length = 0;

            if(str[i] == '\0')
                break;
        }
        else
        {
            length++;
        }
    }

    printf("Longest Word Length = %d", max);

    return 0;
}
