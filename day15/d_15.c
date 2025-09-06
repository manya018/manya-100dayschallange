//Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rev = rev * 10 + (num % 10);  // take last digit and add to reverse
        num = num / 10;               // remove last digit
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}
