// Write a program to Check anagram strings. 

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100],str2[100];
    int i,len1,len2,freq[256]={0};
    printf("Enter first string : ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter second string : ");
    fgets(str2,sizeof(str2),stdin);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if (str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
        len1--;
    }
    if (str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
        len2--;
    }
    if (len1 != len2) {
        printf("Not anagram\n");
        return 0;
    }
    for (i=0;i<len1;i++) {
        freq[str1[i]]++;
        freq[str2[i]]--;
    }
    for (i =0;i<256;i++) {
        if (freq[i] != 0) {
            printf("Not anagram\n");
            return 0;
        }
    }
    printf("Anagram string.\n");
    return 0;
}