//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int arr[100], n, i, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &x);

    
    i = n - 1;
    while(i >= 0 && arr[i] > x) {
        arr[i + 1] = arr[i]; 
        i--;
    }

    arr[i + 1] = x; 
    n++; 

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
