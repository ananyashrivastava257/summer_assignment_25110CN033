// Write a program to Find duplicates in array. 

#include <stdio.h>

int main () {
    int n,i,j,k,duplicate,arr[50];
    printf("Enter number of elements : ");
    scanf("%d",&n);
    if (n <= 0 || n > 50) {
        printf("Invalid Array Size.");
        return 0;
    }
    printf("Enter elements of an array : \n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements are : \n");
    for (i=0;i<n;i++) {
        duplicate = 0;
        for (k=0;k<i;k++) {
            if (arr[i] == arr[k]) {
                duplicate = 1;
                break;
            }
        }
        if (duplicate == 1) {
            continue;
        }
        for (j=i+1;j<n;j++) {
            if (arr[i] == arr[j]) {
                printf("%d\t",arr[i]);
                break;
            }
        }
    }
    return 0;
}