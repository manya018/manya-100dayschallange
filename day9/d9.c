Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, root1, root2, realPart, imagPart;

    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    D = b * b - 4 * a * c;

    if (D > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root1 = %.2f, Root2 = %.2f\n", root1, root2);
    }
    else if (D == 0) {
        // Two equal real roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-D) / (2 * a);
        printf("Roots are imaginary (complex).\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
