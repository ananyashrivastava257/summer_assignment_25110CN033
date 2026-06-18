// Write a program to Merge arrays. 

#include <stdio.h>

int main () {
    int n1,n2,i,arr[50],brr[50],crr[100];
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
    for (i=0;i<(n1+n2);i++) {
        if (i < n1) {
            crr[i] = arr[i];
        }
        else {
            crr[i] = brr[i - n1];
        }
    }
    printf("Array after mergeing is :\n");
    for(i=0;i<(n1+n2);i++) {
        printf("%d ",crr[i]);
    }
    return 0;
}
