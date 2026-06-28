// Write a program to Find longest word. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, max = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            if (j > 0) {   
                word[j] = '\0';
                if (j > max) {
                    max = j;
                    strcpy(longest, word);
                }
                j = 0;
            }
            if (str[i] == '\0' || str[i] == '\n')
                break;
        }
        i++;
    }
    printf("Longest word: %s\n", longest);
    return 0;
}