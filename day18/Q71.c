// Write a program to Binary search. 

#include <stdio.h>

int main () {
    int n,i,j,arr[50],item,found=0,beg,end,mid;
    printf("Enter number of elements of the array : ");
    scanf("%d",&n);
    printf("Enter elements of the array : \n");
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&item);
    beg = 0 , end = n-1;
    while (beg <= end) {
        mid = (beg + end) / 2;
        if (arr[mid] == item) {
            found = 1;
            printf("Element found at %dth position.",mid+1);
            break;
        }
        else if (arr[mid] > item) {
            end = mid - 1;
        }
        else {
            beg = mid + 1;
        }
    }
    if (found == 0) {
        printf("Element not found.\n");
    }
    return 0;
}