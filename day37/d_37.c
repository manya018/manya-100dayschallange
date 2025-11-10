//Find the transpose of a matrix

#include <stdio.h>

int main() {
    int a[10][10], trans[10][10];
    int row, col, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            trans[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for(i = 0; i < col; i++) {
        for(j = 0; j < row; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
