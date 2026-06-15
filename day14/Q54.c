// Write a program to Frequency of an element. 

#include <stdio.h>

int main () {
    int arr[50],n,i,item,count=0;
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
    printf("Enter the element to find frequency : ");
    scanf("%d",&item);
    for (i=0;i<n;i++) {
        if(arr[i] == item) {
            count++;
        }
    }
    if (count > 0) {
        printf("Frequency of the element = %d\n",count);
    }
    else {
        printf("Element not found.\n");
    }
    return 0;
}