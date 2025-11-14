//Count characters in a string without using built-in length functions.

#include<stdio.h>

int main(){
    char str[100];
    int count=0;

    printf("enter string"):
(str, sizeof(str), stdin);

 while (str[count] != '\0') {
        count++;
    }
 if (str[count - 1] == '\n') {
        count--;
    }
 printf("Number of characters: %d\n", count);

    return 0;
}
