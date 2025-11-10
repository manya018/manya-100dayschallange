//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int a[10][10], row, col, i, j, k, flag = 1;
    int diag[10]; 

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    
    if(row != col) {
        printf("Matrix is not square, diagonal comparison is not possible.");
        return 0;
    }

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < row; i++) {
        diag[i] = a[i][i];
    }

    
    for(i = 0; i < row; i++) {
        for(j = i + 1; j < row; j++) {
            if(diag[i] == diag[j]) {
                flag = 0;  
                break;
            }
        }
    }

    if(flag == 1)
        printf("All diagonal elements are distinct.");
    else
        printf("Diagonal elements are NOT distinct.");

    return 0;
}
