// Write a program to Union of arrays. 

#include <stdio.h>

int main () {
    int n1,n2,i,j,k=0,arr[50],brr[50],crr[100],duplicate;
    printf("Enter number of elements of first array : ");
    scanf("%d",&n1);
    printf("Enter number of elements of second array : ");
    scanf("%d",&n2);
    printf("Enter elements of first array arr[50] : \n");
    for(i=0;i<n1;i++) {
        scanf("%d",&arr[i]);
        crr[k++] = arr[i];
    }
    printf("Enter elements of second array brr[50] : \n");
    for(i=0;i<n2;i++) {
        scanf("%d",&brr[i]);
        duplicate = 0;
        for (j=0;j<k;j++) {
            if (brr[i] == crr[j]) {
                duplicate = 1;
                break;
            }
        }
        if (duplicate == 0) {
            crr[k++] = brr[i];
        }
    }
    printf("Union of arrays : \n");
    for (i=0;i<k;i++) {
        printf("%d ",crr[i]);
    }
    return 0;
}