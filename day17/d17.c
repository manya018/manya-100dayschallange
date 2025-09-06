//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    for (int x = num; x != 0; x = x / 10) {
        n++;
    }

    // Calculate sum of digits^n
    for (int x = num; x != 0; x = x / 10) {
        remainder = x % 10;
        result += (int)pow(remainder, n);
    }

    // Check Armstrong
    if (result == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
