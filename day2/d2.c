Write a program to calculate the area and perimeter of a rectangle given its length and breadth

#include<stdio.h>

int main(){
    int length, breadth;
    printf("enter value of length\n");
    scanf("%d", &length);
    printf("enter value of breadth\n");
    scanf("%d", &breadth);
    printf("value of perimeter of rectangle is %d\n", 2*(length+breadth));
    printf("value of area of rectangle is %d", (length*breadth));
    return 0;
}
