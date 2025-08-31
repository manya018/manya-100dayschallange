#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nSum = %d", a + b);
    printf("\nDifference = %d", a - b);
    printf("\nProduct = %d", a * b);

    if (b != 0) {
        printf("\nQuotient = %d\n", a / b);
    } else {
        printf("\nDivision not possible (denominator is 0)\n");
    }

    return 0;
}
