//Convert a lowercase string to uppercase without using built-in functions.

#include<stdio.h>

int main(){
    char str[100];
    int i=0,uppercase=0,lowercase=0;

    printf("enter a string:");
    scanf("%[^\n]s",str);

    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("uppercase strings: %s\n",str);
    return 0;
}
