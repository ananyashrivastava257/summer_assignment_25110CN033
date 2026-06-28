// Write a program to Create quiz application.

#include <stdio.h>

int main() {
    int score = 0;
    int answer;
    printf("Welcome to Quiz Game!\n\n");
    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Delhi\n\n");
    }

    // Question 2
    printf("Q2. What will India celebrate in 2047?\n");
    printf("1. 50 years of independence\n2. 75 years of independence\n3. 100 years of independence\n4. 150 years of independence\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is 100 years of independence\n");
    }

    // Question 3
    printf("Q3. 2 + 2 = ?\n");
    printf("1. 3\n2. 4\n3. 5\n4. 6\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is 4\n\n");
    }

    printf("Your total score: %d/3\n", score);
    if (score == 3) {
        printf("Excellent!\n");
    } else if (score == 2) {
        printf("Good job!\n");
    } else {
        printf("Try again!\n");
    }

    return 0;
}