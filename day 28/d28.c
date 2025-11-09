#include<stdio.h>

int main(){
    int i,n,j;
    printf("enter number");
    scanf("%d",&n);
    printf("the prime numbers from 1 to %d are:\n",n);

    for(i=2 ;i <= n; i++)
    {
for(j = 2; j < i; j++){
    if(i % j == 0)
    break;
}
 if(j == i)
            printf("%d\n ", i);
    }
    return 0;
}
