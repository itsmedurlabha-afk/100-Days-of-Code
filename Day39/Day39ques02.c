Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Input size of square matrix
    printf("Enter the size of the square matrix (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Size must be a positive integer.\n");
        return 1;
    }

    int matrix[n][n]; // Variable Length Array (C99+)

    // Input matrix elements
    printf("Enter %d x %d matrix elements:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input. Please enter integers only.\n");
                return 1;
            }
        }
    }

    // Calculate sum of main diagonal elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i]; // main diagonal: row index == column index
    }

    // Output result
    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}
