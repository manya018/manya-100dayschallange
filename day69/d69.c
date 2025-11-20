//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int xorAll = 0;

    for (int i = 0; i < n; i++) {
        xorAll ^= arr[i];     

        if (i < n - 1)
            xorAll ^= i + 1;  
    }

    printf("%d", xorAll);

    return 0;
}
