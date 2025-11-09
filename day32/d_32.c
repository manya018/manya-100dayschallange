#include <stdio.h>

int main() {
    int num, digit;
    int freq[10] = {0};  // to store frequency of digits 0-9
    int max = 0, mostFreqDigit = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if(num < 0)
        num = -num;

    
    while(num > 0) {
        digit = num % 10;   
        freq[digit]++;     
        num = num / 10;     
    }

    
    for(int i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            mostFreqDigit = i;
        }
    }

    printf("Digit occurring most times = %d\n", mostFreqDigit);
    printf("It occurs %d times.\n", max);

    return 0;
}
