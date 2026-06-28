// Write a program to Remove duplicate characters.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j, k = 0, flag;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++) {
        flag = 0;
        for (j = 0; j < k; j++) {
            if (str[i] == result[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            result[k++] = str[i];
        }
    }
    result[k] = '\0';
    printf("String after removing duplicates: %s\n", result);
    return 0;
}