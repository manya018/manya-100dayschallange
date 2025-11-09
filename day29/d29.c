//Find the sum of array elements
#include<stdio.h>

int main(){
    int arr[50],n,i,sum;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   
    }

    for(i = 0; i < n; i++) {
        sum = sum + arr[i];     
    }

    printf("Sum of array elements = %d\n", sum);
    return 0;
}
