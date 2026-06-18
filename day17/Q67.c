// Write a program to Intersection of arrays. 

#include <stdio.h>

int main () {
    int n1,n2,i,j,k,l=0,arr[50],brr[50],crr[100],duplicate;
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
    for (i=0;i<n1;i++) {
        for (j=0;j<n2;j++) {
            if (arr[i] == brr[j]) {
                duplicate = 0;
                for (k=0;k<l;k++) {
                    if (crr[k] == arr[i]) {
                        duplicate = 1;
                        break;
                    }
                }
                if (duplicate == 0) {
                    crr[l++] = arr[i];
                }
            }
        }
    }
    printf("Intersection of arrays : \n");
    for (i=0;i<l;i++) {
        printf("%d ",crr[i]);
    }
    return 0;
}