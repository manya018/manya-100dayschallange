#include<stdio.h>

int main(){
    int n;
    int sum;
    printf("enter no.");
    scanf("%d",&n);
    sum = n * (n + 1) / 2 ;
    printf("sum of first %d natural no.= %d\n", n , sum);
    return 0;
}