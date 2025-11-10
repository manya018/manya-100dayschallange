//Perform diagonal traversal of a matrix.

#include<stdio.h>

int main(){
    int a[10][10],i,j,row,col,start;

    printf("enter number of rows");
    scanf("%d",&row);

     printf("enter number of column");
    scanf("%d",&col);
    
    printf("Enter matrix elements:\n");
     for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    for(start = 0; start < col; start++) {
        i = 0;
        j = start;
        while(i < row && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }
for(start = 1; start < row; start++) {
        i = start;
        j = col - 1;
        while(i < row && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }


    return 0;
}
