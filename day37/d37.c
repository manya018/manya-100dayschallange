//Find the sum of each row of a matrix and store it in an array.

#include<stdio.h>

int main(){
    int a[10][10],i,j, row,col,sum[10];

    printf("enter number of rows");
scanf("%d",&row);

printf("enter number of columns");
scanf("%d",&col);

printf("enter the no. of elments");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        scanf("%d",&a[i][j]);
    }
}
for(i=0; i<row; i++){
    sum[i]=0;
    for(j=0;j<col;j++){
        sum[i] = sum[i] + a[i][j];
    }
}
printf("\nsum of each row\n");
for(i=0; i<row;i++){
    printf("row %d = %d\n", i+1, sum[i]);
}
    return 0;
}
