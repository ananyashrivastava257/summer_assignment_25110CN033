// Write a program to Character frequency. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i,j,count;
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++) {
        count = 1;
        if(str[i] == '\0' || str[i] == '\n') {
            continue;
        }
        for(j=i+1;str[j]!='\0';j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '\0';
            }
        }
        if(str[i] != '\0') {
            printf("'%c' = %d\n", str[i], count);
        }
    }
    return 0;
}