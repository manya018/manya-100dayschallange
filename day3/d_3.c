Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    int a, b;

    // Input values
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Swapping without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Output swapped values
    printf("\nAfter swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}

