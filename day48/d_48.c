//reverse each word in sentence without changing word order

#include <stdio.h>

void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;

    printf("Enter a sentence:\n");
    scanf("%[^\n]s", str);  

    while (1) {
    
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;  
        }
        if (str[i] == '\0')
            break;
        i++;
    }

    printf("Reversed words: %s\n", str);
    return 0;
}
