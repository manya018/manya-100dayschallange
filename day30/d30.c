//Count even and odd numbers in an array.
#include<stdio.h>

int main(){
    int arr[50],n,i,even=0,odd=0;
    printf("enter the no. of array");
    scanf("%d",&n);

    printf("enter %d elements");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if (arr[i] % 2 == 0)
    even++;
    else
    odd++;
    
    }
    printf("Total even numbers = %d\n", even);
    printf("Total odd numbers = %d\n", odd);

    return 0;
}
