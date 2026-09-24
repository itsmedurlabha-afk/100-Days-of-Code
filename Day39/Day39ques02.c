Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if all main diagonal elements are distinct
bool areDiagonalElementsDistinct(int matrix[][100], int n) {
    // Compare each diagonal element with the others
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return false; // Found duplicate
            }
        }
    }
    return true; // All distinct
}

int main() {
    int n;
    int matrix[100][100]; // Max size 100x100 for safety

    printf("Enter the size of the square matrix (n): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid size. Please enter an integer between 1 and 100.\n");
        return 1;
    }

    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input. Please enter integers only.\n");
                return 1;
            }
        }
    }

    // Check and display result
    if (areDiagonalElementsDistinct(matrix, n)) {
        printf("All diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are NOT distinct.\n");
    }

    return 0;
}
