//Count vowels and consonants in a string.

#include<stdio.h>

int main(){
    char str[100];
    int i=0, count=0,vowel=0,consonants=0;

    printf("enter a string :");
    scanf("%[^\n]s",str);

while(str[i] != '\0'){
    char ch = str[i];
 if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
if(ch >= 'A' && ch <='Z' ){
    ch = ch +32;
}
 if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
                vowel++;
            } else {
                consonants++;
            }
            
        }
i++;
    }
        

printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonants);
    return 0;
}
