//Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>

int main(){
    int n, digit;
    int onescomplement = 0; 
    int place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &n);
while(n > 0){
    digit = n % 10;
    if(digit == 0)
onescomplement += 1 * place; // flip 0 to 1
else  if(digit == 1)
onescomplement += 0 * place; // flip 1 to 0
else{
     printf("Invalid input! Only 0s and 1s allowed.\n");
     return 1;
}
n /= 10;
place *= 10;
}
printf("1's Complement: %d\n", onescomplement);
    return 0;
}