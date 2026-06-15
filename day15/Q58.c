// Write a program to Rotate array left. 

#include <stdio.h>

int main () {
    int n,i,j,arr[50],k;
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
        int first = arr[0];
        for (j=0;j<n-1;j++) {
            arr[j] = arr[j+1];
        }
        arr[n-1] = first;

    }
    printf("Array after left rotation : \n");
    for (i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
    return 0;
}