#include <stdio.h>

int main()
{
    char str[100];
    int max = 0, count;
    char ch;

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

        if(count > max)
        {
            max = count;
            ch = str[i];
        }
    }

    printf("Maximum Occurring Character = %c", ch);

    return 0;
}