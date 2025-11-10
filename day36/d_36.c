//Find the sum of all elements in a matrix

#include<stdio.h>

int main(){
    int a[10][10],row,col,i,j,sum=0;

printf("enter number of rows");
scanf("%d",&row);

printf("enter number of columns");
scanf("%d",&col);

printf("Enter the elements of the matrix:\n");
for(i=0; i < row ; i++){
    for(j=0; j < col; j++){
        scanf("%d",&a[i][j]);
    }
}
for(i=0; i < row ; i++){
    for(j=0; j < col; j++){
        sum = sum + a[i][j];
    }
    }
    printf("\nSum of all elements in the matrix = %d", sum);

    return 0;
}
