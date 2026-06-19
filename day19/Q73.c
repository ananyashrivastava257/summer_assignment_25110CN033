// Write a program to Add matrices. 

#include <stdio.h>

int main () {
    int m,n,i,j,arr[50][50],brr[50][50],crr[50][50];
    printf("Enter m & n: ");
    scanf("%d %d",&m,&n);
    printf("Enter elements of Matrix A : \n");
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter elements of Matrix B : \n");
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("Sum of Martix : \n");
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            crr[i][j] = arr[i][j] + brr[i][j];
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
