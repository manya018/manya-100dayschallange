/*Write a program to print the following pattern:

*

***

*****
*******
***

*
*/

#include <stdio.h>

int main() {
    int i, j;

    // 1 star
    for (j = 1; j <= 1; j++) {
        printf("*");
    }
    printf("\n\n");

    // 3 stars
    for (j = 1; j <= 3; j++) {
        printf("*");
    }
    printf("\n\n");

    // 5 stars
    for (j = 1; j <= 5; j++) {
        printf("*");
    }
    printf("\n");

    // 7 stars
    for (j = 1; j <= 7; j++) {
        printf("*");
    }
    printf("\n\n");

    // 3 stars
    for (j = 1; j <= 3; j++) {
        printf("*");
    }
    printf("\n\n");

    // 1 star
    for (j = 1; j <= 1; j++) {
        printf("*");
    }
    printf("\n");

    return 0;
}
