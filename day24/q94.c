// Write a program to Compress a string. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[200];
    int i, j = 0, count;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        count = 1;
        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }
        result[j++] = str[i];
        j += sprintf(&result[j], "%d", count);
    }
    result[j] = '\0';
    printf("Compressed string: %s\n", result);
    return 0;
}