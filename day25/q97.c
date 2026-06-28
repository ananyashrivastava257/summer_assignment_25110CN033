// Write a program to Merge two sorted arrays. 

#include <stdio.h>

int main() {
    int n1, n2,arr[50],brr[50];
    printf("Enter n1 : ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);
    printf("Enter elements of first sorted array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter elements of second sorted array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &brr[i]);
    }
    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr[i] < brr[j]) {
            merged[k++] = arr[i++];
        } else {
            merged[k++] = brr[j++];
        }
    }
    while (i < n1) {
        merged[k++] = arr[i++];
    }

    while (j < n2) {
        merged[k++] = brr[j++];
    }
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
