//Write a program to find the LCM of two numbers.

#include<stdio.h>

int main(){
    int a, b, x, y, hcf, lcm;
    printf("enter two numers:");
    scanf("%d %d", &x, &y);
    a = x;
    b = y;
    while(a != b){
    if(a>b)
    a= a - b;
    else
    b= b - a; 
}
hcf = a;
printf("HCF (GCD)= %d\n", a);
         
    lcm = (x * y) / hcf;          

    printf("LCM of %d and %d = %d\n", x, y, lcm);
    return 0;
}
