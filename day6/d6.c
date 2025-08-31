Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>

int main(){
    int a;
    printf("enter any number");
    scanf("%d", &a);
    if(a / 2)
    {
printf("number is even");
    }
    else{
        printf("nuber is odd");
    }
    return 0;
}
