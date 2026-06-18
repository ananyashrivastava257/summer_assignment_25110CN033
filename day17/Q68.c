// Write a program to Find common elements. 

#include <stdio.h>

int main () {
    int n1,n2,i,j,k,arr[50],brr[50],found=0,duplicate;
    printf("Enter number of elements of first array : ");
    scanf("%d",&n1);
    printf("Enter number of elements of second array : ");
    scanf("%d",&n2);
    printf("Enter elements of first array arr[50] : \n");
    for(i=0;i<n1;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter elements of second array brr[50] : \n");
    for(i=0;i<n2;i++) {
        scanf("%d",&brr[i]);
    }
    printf("Common Elements of two arrays are :\n");
    for (i=0;i<n1;i++) {
        duplicate = 0;
        for (k=0;k<i;k++) {
            if (arr[i] == arr[k]) {
                duplicate =1;
                break;
            }
        }
        if (duplicate == 1) {
            continue;
        }
        for (j=0;j<n2;j++) {
            if (arr[i] == brr[j]) {
                printf("%d ",arr[i]);
                found = 1;
                break;
            }
        }
    }
    if (found == 0) {
        printf("No common elements found.");
    }
    return 0;
}