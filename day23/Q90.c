// Write a program to Find first repeating character.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i,len,freq[256]={0};
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    for(i = 0; i < len; i++) {
        if (freq[str[i]] == 1) {
            printf("First repeating character: %c\n",str[i]);
            return 0;
        }
        freq[str[i]]++;
    }
    printf("No repeating character found.\n");
    return 0;
}