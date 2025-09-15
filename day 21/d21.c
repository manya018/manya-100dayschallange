//Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, first, last, temp, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;            
    last = temp % 10;        

    // find first digit and place value
    while (temp >= 10) {     
        temp = temp / 10;  
        place = place * 10;  
    }
    first = temp;            // first digit is left in temp

    // now we swap digits
    // step 1: remove the contribution of first*place and last from num
    num = num - first * place - last;

    // step 2: add them back swapped (last goes to first’s place, first goes to last’s place)
    num = num + last * place + first;

    printf("Number after swapping first and last digit: %d\n", num);

    return 0;
}
