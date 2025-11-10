//Add two matrices

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int row, col, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);


    printf("Enter elements of first matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

  
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }


    printf("\nResultant Matrix (Sum):\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
