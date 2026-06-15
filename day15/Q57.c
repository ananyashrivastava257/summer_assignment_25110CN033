// Write a program to Reverse array. 

#include <stdio.h>

int main () {
    int n,i,j,arr[50];
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
    i = 0;
    j = n-1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    prinf("Reversed array : \n");
    for (i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
    return 0;
}
