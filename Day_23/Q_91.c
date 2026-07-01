#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count1 = 0, count2 = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while(str1[count1] != '\0')
        count1++;

    while(str2[count2] != '\0')
        count2++;

    if(count1 != count2)
    {
        printf("Not Anagram");
        return 0;
    }

    for(int i = 0; i < count1; i++)
    {
        int found = 0;

        for(int j = 0; j < count2; j++)
        {
            if(str1[i] == str2[j])
            {
                found = 1;
                str2[j] = '*';   // Mark as used
                break;
            }
        }

        if(found == 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram Strings");

    return 0;
}

/* 

listen
silent

Output:
Anagram Strings

*/