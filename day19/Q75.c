// Write a program to Transpose matrix. 

#include <stdio.h>

int main () {
    int m,n,i,j,arr[50][50];
    printf("Enter m & n: ");
    scanf("%d %d",&m,&n);
    printf("Enter elements of Matrix A : \n");
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpose of Martix : \n");
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}