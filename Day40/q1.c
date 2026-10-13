Perform diagonal traversal of a matrix.
#include <stdio.h>
#include <stdlib.h>

// Function to perform diagonal traversal of a matrix
void diagonalTraversal(int **matrix, int rows, int cols) {
    // Total diagonals = rows + cols - 1
    for (int d = 0; d < rows + cols - 1; d++) {
        // Determine starting point of this diagonal
        int row = (d < cols) ? 0 : d - cols + 1;
        int col = (d < cols) ? d : cols - 1;

        // Traverse the diagonal
        while (row < rows && col >= 0) {
            printf("%d ", matrix[row][col]);
            row++;
            col--;
        }
    }
    printf("\n");
}

int main() {
    int rows, cols;

    // Input matrix dimensions
    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        printf("Invalid input. Rows and columns must be positive integers.\n");
        return 1;
    }

    // Allocate memory for matrix
    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (!matrix) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (!matrix[i]) {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input. Please enter integers only.\n");
                return 1;
            }
        }
    }

    // Perform diagonal traversal
    printf("Diagonal Traversal:\n");
    diagonalTraversal(matrix, rows, cols);

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
