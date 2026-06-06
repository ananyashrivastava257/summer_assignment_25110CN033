#include <stdio.h>

int main() {
    int num, i = 0, bin[32];

    printf("Enter decimal number: ");
    scanf("%d", &num);

    if(num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Get binary digits
    while(num > 0) {
        bin[i] = num % 2; // remainder
        num = num / 2; // quotient
        i++;
    }

    printf("Binary: ");
    // Print in reverse order
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");
    return 0;
}









