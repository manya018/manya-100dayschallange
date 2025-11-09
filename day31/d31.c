//Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int arr[100], n, i, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("%d found at position %d.\n", key, i + 1);
            return 0;   
        }
    }

    printf("%d not found in the array.\n", key);

    return 0;
}
