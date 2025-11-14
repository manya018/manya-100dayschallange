//Check if a string is a palindrome.

#include<stdio.h>

int main(){
    char str[100];
    int i=0,len=0,count=0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[len] != '\0'){
        len++;
    }

    for(i=0;i<len/2;i++){
        if(str[i] != str[len-1-i]){
            count=0;
            break;
        }
    }
    if(count=1)
        printf("the string is palindrome")
else
     printf("The string is NOT a palindrome.\n");
    return 0;
}
