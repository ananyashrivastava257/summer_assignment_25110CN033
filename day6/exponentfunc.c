#include <stdio.h>

int main() {
    double base, result = 1.0;
    int exp, abs_exp;

    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exp);

    abs_exp = (exp < 0) ? -exp : exp;

    for (int i = 0; i < abs_exp; i++) {
        result *= base;
    }

    // If exponent is negative, invert the final result
    if (exp < 0) {
        result = 1.0 / result;
    }

    printf("%.4lf raised to the power of %d is: %.4lf\n", base, exp, result);

    return 0;
}
