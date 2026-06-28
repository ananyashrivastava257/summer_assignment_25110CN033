// Write a program to Create number guessing game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int attempts = 0,guess,number;
    srand(time(0));
    number = rand() % 1000 + 1;
    printf("Welcome to Number Guessing Game!\n");
    printf("Guess a number between 1 and 1000\n");
    do {
        printf("Enter your Guess : ");
        scanf("%d",&guess);
        attempts++;
        if (guess < number) {
            printf("Too less! Try again.\n");
        }
        else if (guess > number) {
            printf("Too high! Try again.\n");
        }
    } while (guess != number);
    printf("Congratulations! You guessed the correct number.\n");
    printf("Total attempts : %d\n", attempts);
    return 0;
}
