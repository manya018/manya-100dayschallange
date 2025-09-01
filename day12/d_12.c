//Write a program to calculate an electricity bill based on units consumed.


#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    printf("Enter the number of units: ");
    scanf("%d", &units);

        // Calculate fine using for loop
        for (int i = 1; i <= units; i++) {
            if (i <= 500) {
                bill += 50;
            }
            else if (i <= 1000) {
                bill += 50;
            }
            else {
                bill += 60;
            }
        }
        printf("Electricity Bill: Rs %d\n", bill);

    return 0;
}


