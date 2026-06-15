// Write a program to Rotate array right. 

#include <stdio.h>

int main () {
    int n,i,j,k,arr[50];
    printf("Enter number of elements : ");
    scanf("%d",&n);
    if (n <= 0 || n > 50) {
        printf("Invalid Array Size.");
        return 0;
    }
    printf("Enter the elements of the array : ");
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of times to rotate the array : ");
    scanf("%d",&k);
    k = k % n;
    for (i=0;i<k;i++) {
        int last = arr[n-1];
        for (j=n-1;j>0;j--) {
            arr[j] = arr[j-1];
        }
        arr[0] = last;
    }
    printf("Array after right rotation : \n");
    for (i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
    return 0;
}