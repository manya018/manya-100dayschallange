//Write a program to check whether the no\umber is a strong number

#include <stdio.h>

// function to calculate factorial
int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;   // copy original number

    while (temp > 0) {
        digit = temp % 10;            // extract last digit
        sum = sum + factorial(digit); // add factorial of digit
        temp = temp / 10;             // remove last digit
    }

    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is NOT a Strong Number.\n", num);

    return 0;
}



