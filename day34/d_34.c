//Delete an element from an array.

#include <stdio.h>

int main() {
    int arr[100], n, i, pos, x, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &x);

    
    for(i = 0; i < n; i++) {
        if(arr[i] == x) {
            found = 1;
            pos = i;
            break;
        }
    }


    if(found == 0) {
        printf("Element not found.\n");
    } 
    else {
      
        for(i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 

        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
