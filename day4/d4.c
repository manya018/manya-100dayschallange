Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b, temp;

    // Input values
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;

    // Output swapped values
    printf("\nAfter swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}
