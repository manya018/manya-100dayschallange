//find the longest word in a sentence

#include <stdio.h>

int main() {
    char str[200], longest[200];
    int maxLen = 0, currentLen = 0;
    int start = 0, maxStart = 0;

    printf("Enter a sentence:\n");
    scanf("%[^\n]s", str);   

    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            currentLen++;

            if (currentLen == 1) {
                start = i;  
            }
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStart = start;
            }
            currentLen = 0;

            if (str[i] == '\0')
                break;
        }
    }

    for (int i = 0; i < maxLen; i++) {
        longest[i] = str[maxStart + i];
    }
    longest[maxLen] = '\0';

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}


