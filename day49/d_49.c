#include <stdio.h>

int main() {
    char name[200];
    int i = 0, lastSpace = -1;

    printf("Enter your full name:\n");
    scanf("%[^\n]s", name);

    while (name[i] != '\0') {
        if (name[i] == ' ') {
            lastSpace = i;
        }
        i++;
    }

    printf("%c ", name[0]); 

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c ", name[i + 1]);
        }
    }
    printf("%s", &name[lastSpace + 1]);

    return 0;
}
