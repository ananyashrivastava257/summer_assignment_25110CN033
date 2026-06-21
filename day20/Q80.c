// Write a program to Find column-wise sum. 

#include <stdio.h>

int main () {
    int m,n,i,j,arr[50][50],sum;
    printf("Enter m & n: ");
    scanf("%d %d",&m,&n);
    printf("Enter elements of Matrix A : \n");
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Column-wise sum : \n");
    for (j=0;j<n;j++) {
        sum = 0;
        for (i=0;i<m;i++) {
            sum = sum + arr[i][j];
        }
        printf("Sum of column %d : %d\n",j+1,sum);
    }
    return 0;
}