//Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int a[10][10], row, col, i, j, symmetric = 1;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    if(row != col) {
        printf("Matrix is not symmetric (not a square matrix).");
        return 0;
    }

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric == 1)
        printf("Matrix is symmetric.");
    else
        printf("Matrix is not symmetric.");

    return 0;
}
