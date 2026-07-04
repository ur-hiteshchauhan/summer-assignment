//Number Guessing Game

#include <stdio.h>

int main()
{
    int secret = 25;
    int guess;

    printf("Guess the number (1-50): ");
    scanf("%d", &guess);

    if(guess == secret)
        printf("Congratulations! You guessed correctly.");
    else if(guess > secret)
        printf("Too High!");
    else
        printf("Too Low!");

    return 0;
}

/* 
Example=
Guess: 25

Congratulations! You guessed correctly.

*/