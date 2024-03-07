#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void transpose(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int i, j;
    int transposeMatrix[MAX_COLS][MAX_ROWS];

    for (i = 0; i < cols; ++i) {
        for (j = 0; j < rows; ++j) {
            transposeMatrix[i][j] = matrix[j][i];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < cols; ++i) {
        for (j = 0; j < rows; ++j) {
            printf("%d\t", transposeMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols, i, j;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    transpose(matrix, rows, cols);

    return 0;
}
