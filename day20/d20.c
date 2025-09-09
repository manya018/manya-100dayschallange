//Write a program to find the product of odd digits of a number.

#include<stdio.h>

int main(){
    int n, digit;
    int product = 1;
    int hasodd= 0; 
    printf("enter a number:");
    scanf("%d", &n);
    if(n==0){
        printf("product off odd digits: 0\n");
        return 0;
    }
    while(n > 0){
        digit = n % 10;
        if(digit % 2 != 0){
            product *= digit;
            hasodd = 1;
        }
        n /= 10;
    }
    if (hasodd)
    printf("product of odd digits: %d\n", product);
    else
    printf("no odd digits found!\n");
    return 0;
}
