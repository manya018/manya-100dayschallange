//find the first repeating lowercase alphabet in a string

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};   
    
    printf("Enter a string: ");
    scanf("%s", str);

    
    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i] - 'a']++;
    }

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[str[i] - 'a'] > 1) {
            printf("First repeating lowercase alphabet: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
