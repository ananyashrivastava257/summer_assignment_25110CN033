// Write a program to Create menu-driven string operations system.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    while (1) {
        printf("\n--- STRING MENU ---\n");
        printf("1. Length\n2. Copy\n3. Concatenate\n4. Compare\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        if (choice == 1) {
            printf("Length = %lu\n", strlen(str1));
        }

        else if (choice == 2) {
            strcpy(str2, str1);
            printf("Copied string: %s\n", str2);
        }

        else if (choice == 3) {
            printf("Enter second string: ");
            scanf(" %[^\n]", str2);
            strcat(str1, str2);
            printf("After concat: %s\n", str1);
        }

        else if (choice == 4) {
            printf("Enter second string: ");
            scanf(" %[^\n]", str2);
            if (strcmp(str1, str2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
        }

        else {
            printf("Wrong choice\n");
        }
    }
    return 0;
}