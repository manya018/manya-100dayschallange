Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds, remaining;

    // Input total seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion without using modulus
    hours = totalSeconds / 3600;
    remaining = totalSeconds - (hours * 3600);

    minutes = remaining / 60;
    remaining = remaining - (minutes * 60);

    seconds = remaining;  // whatever is left are seconds

    // Display result
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}



