// Write a program to Multiply matrices. 

#include <stdio.h>

int main () {
    int r1,r2,c1,c2,i,j,k,arr[50][50],brr[50][50],crr[50][50];
    printf("Enter r1 & c1 : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter r2 & c2 : ");
    scanf("%d %d",&r2,&c2);
    if (c1 != r2) {
        printf("Multiplication of Matrices is not possible.");
        return 0;
    }
    printf("Enter elements of Matrix A : \n");
    for (i=0;i<r1;i++) {
        for (j=0;j<c1;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter elements of Matrix B : \n");
    for (i=0;i<r2;i++) {
        for (j=0;j<c2;j++) {
            scanf("%d",&brr[i][j]);
        }
    }
    for (i=0;i<r1;i++) {
        for (j=0;j<c2;j++) {
            crr[i][j] = 0;
            for (k=0;k<c1;k++) {
                crr[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    printf("Resultant Matrix : \n");
    for (i=0;i<r1;i++) {
        for (j=0;j<c2;j++) {
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
