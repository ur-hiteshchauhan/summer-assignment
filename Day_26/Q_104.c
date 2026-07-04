//Quiz Application

#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("===== Simple Quiz =====\n");

    printf("\nQ1. Capital of India?\n");
    printf("1. Delhi\n");
    printf("2. Mumbai\n");
    printf("3. Chennai\n");

    printf("Enter answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nQ2. 5 + 5 = ?\n");
    printf("1. 8\n");
    printf("2. 10\n");
    printf("3. 15\n");

    printf("Enter answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nQ3. C language was developed before C++?\n");
    printf("1. Yes\n");
    printf("2. No\n");

    printf("Enter answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nYour Score = %d/3", score);

    return 0;
}