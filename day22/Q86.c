// Write a program to Count words in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i,count=0;
    printf("Enter a sentence : ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++) {
        if((i == 0 && str[i] != ' ') || (str[i] != ' ' && str[i-1] == ' ')) {
            count++;
        }
    }
    printf("Total number of words in a sentence are : %d\n",count);
    return 0;
}