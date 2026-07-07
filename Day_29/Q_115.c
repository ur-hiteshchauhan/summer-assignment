//Menu Driven String Operations\

/* 

Operations like 

Find Length
Reverse String
Convert to Uppercase

*/

#include <stdio.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter String: ");
    scanf("%s", str);

    printf("\n1. Find Length");
    printf("\n2. Reverse");
    printf("\n3. Uppercase");

    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        int len = 0;

        while(str[len] != '\0')
            len++;

        printf("Length = %d", len);
    }

    else if(choice == 2)
    {
        int len = 0;

        while(str[len] != '\0')
            len++;

        printf("Reverse = ");

        for(int i = len - 1; i >= 0; i--)
            printf("%c", str[i]);
    }

    else if(choice == 3)
    {
        for(int i = 0; str[i] != '\0'; i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }

        printf("Uppercase = %s", str);
    }

    else
    {
        printf("Invalid Choice");
    }

    return 0;
}
