// Write a program to Check palindrome string. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    len = strlen(str);
    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    if(strcmp(str, rev) == 0) {
        printf("Palindrome string.\n");
    }
    else {
        printf("Not a palindrome string.\n");
    }
    return 0;
}
