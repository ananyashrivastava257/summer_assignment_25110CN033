// Write a program to Second largest element. 

#include <stdio.h>
#include <limits.h>

int main () {
    int n,i,arr[50];
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
    int first_largest = INT_MIN;
    int second_largest = INT_MIN;
    for (i=0;i<n;i++) {
        if (arr[i] > first_largest) {
            second_largest = first_largest;
            first_largest = arr[i];
        }
        else if ((arr[i] > second_largest) && (arr[i] != first_largest)) {
            second_largest = arr[i];
        }
    }
    printf("First largest element = %d\n",first_largest);
    printf("Second largest element = %d\n",second_largest);
    return 0;
} 