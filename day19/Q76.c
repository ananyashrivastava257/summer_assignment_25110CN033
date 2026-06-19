// Write a program to Find diagonal sum. 

#include <stdio.h>

int main () {
    int m,n,i,j,arr[50][50],Rsum=0,Lsum=0,Sum=0;
    printf("Enter m & n: ");
    scanf("%d %d",&m,&n);
    if (m != n) {
        printf("Diagonal sum is only possible for square matrix");
        return 0;
    }
    printf("Enter elements of Matrix A : \n");
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            if (i == j) {
                Lsum += arr[i][j]; 
            }
            if (j == n-i-1) {
                Rsum += arr[i][j]; 
            }
        }
    }
    Sum = Lsum + Rsum;
    if (m % 2 == 1) {
        Sum = Sum - arr[m/2][m/2];
    }
    printf("Sum  of diagonals is : %d", Sum);
    return 0;
}