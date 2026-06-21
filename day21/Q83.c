// Write a program to Count vowels and consonants.

#include <stdio.h>

int main() {
    char str[100];
    int v = 0, c = 0, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
               str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                v++;
            else
                c++;
        }
    }
    printf("Vowels = %d\nConsonants = %d", v, c);
    return 0;
}