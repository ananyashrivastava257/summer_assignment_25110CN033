// Write a program to Find maximum occurring character.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100],result;
    int i,len,freq[256]={0},max=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    for(i = 0; i < len; i++) {
        freq[str[i]]++;
    }
    for(i = 0; i < len; i++) {
        if (freq[str[i]] > max) {
            max = freq[str[i]];
            result = str[i];
        }
    }
    printf("Maximum occuring character : %c\n",result);
    return 0;
}