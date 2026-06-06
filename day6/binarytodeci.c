#include <stdio.h>
#include <math.h>

int main() {
    long bin, dec = 0, rem, base = 1;

    printf("Enter binary number: ");
    scanf("%lld", &bin);

    while(bin > 0) {
        rem = bin % 10; 
        dec = dec + rem * base; 
        bin = bin / 10; 
        base = base * 2; 
    }

    printf("Decimal: %lld\n", dec);
    return 0;
}