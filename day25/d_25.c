/*Write a program to print the following pattern:
*****
****
***
**
* */


#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {        // rows
        for (j = 1; j <= i; j++) {    // columns
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}



