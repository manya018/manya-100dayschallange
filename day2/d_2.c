#include <stdio.h>

int main() {
    float radius, area, circumference;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    
    printf("Area of Circle = %.2f\n", area);
    printf("Circumference of Circle = %.2f\n", circumference);

    return 0;
}
