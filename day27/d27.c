/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
* */

#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5; // number of rows in the upper half

    // Upper half (1,3,5,7,9)
    for (i = 1; i <= n; i++) {
        // print spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (7,5,3,1)
    for (i = n - 1; i >= 1; i--) {
        // print spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
