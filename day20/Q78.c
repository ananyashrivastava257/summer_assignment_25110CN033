// Write a program to Check symmetric matrix. 

#include <stdio.h>

int main () {
    int m,n,i,j,arr[50][50],brr[50][50],flag=1;
    printf("Enter m & n : ");
    scanf("%d %d",&m,&n);
    if (m != n) {
        printf("Given matrix is not a symmmetix matrix");
        return 0;
    }
    printf("Enter elements of Matrix A : \n");
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            brr[i][j] = arr[j][i];
        }
    }
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            if (arr[i][j] != brr[i][j]) {
                flag = 0;
                break; 
            }
        }
        if (flag == 0 ) {
            break;
        }
    }
    if (flag == 1) {
        printf("Given matrix is a symmmetix matrix");
    }
    else {
        printf("Given matrix is not a symmmetix matrix");
    }
    return 0;
}