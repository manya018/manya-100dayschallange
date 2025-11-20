//Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000];

    scanf("%[^\n]s", s);

    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            s[i] = toupper(s[i]);
            break;
        }
    }

    printf("%s", s);

    return 0;
}
