//Write a program to calculate the factorial of a number.

#include<stdio.h>

int main(){
    int number, factorial;
    factorial = 1; 
    printf("enter a number:");
    scanf("%d", &number);
    for(int i =1; i <= number; i++){
        factorial *= i;
    }
printf("Factorial of %d = %d\n", number, factorial);
    return 0;
}
