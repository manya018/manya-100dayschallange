//Write a program to print the sum of the first n odd numbers.

#include<stdio.h>

int main(){
    int a, sum;
    printf("enter number:");
    scanf("%d",&a);
    sum = a*a;
    printf("sum of the first %d odd numbers = %d ", a, sum);

    return 0;
}
