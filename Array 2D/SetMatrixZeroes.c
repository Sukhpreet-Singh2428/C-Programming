#include<stdio.h>
#include<stdlib.h>
void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int m = matrixSize;
    int n = *matrixColSize;
    // Allocate space for row and column flags
    int* rowZero = (int*)calloc(m, sizeof(int));
    int* colZero = (int*)calloc(n, sizeof(int));
    // First pass: mark rows and columns to be zeroed
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                rowZero[i] = 1;
                colZero[j] = 1;
            }
        }
    }
    // Second pass: set matrix cells to zero if their row or column is marked
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (rowZero[i] || colZero[j]) {
                matrix[i][j] = 0;
            }
        }
    }
    // Free allocated memory
    free(rowZero);
    free(colZero);
}
int main() {
    int row0[] = {1, 1, 1};
    int row1[] = {1, 0, 1};
    int row2[] = {1, 1, 1};
    int* matrix[] = {row0, row1, row2};
    int cols = 3;

    setZeroes(matrix, 3, &cols);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}