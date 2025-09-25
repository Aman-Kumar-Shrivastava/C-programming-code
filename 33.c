#include <stdio.h>

// Function to calculate power
int power(int base, int exponent) {
    int result = 1;
    for(int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);
    printf("%d raised to the power %d is %d\n", base, exponent, result);

    return 0;
}