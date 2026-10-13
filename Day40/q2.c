Multiply two matrices.
#include <stdio.h>
#define MAX 10
int main() {
   int r1, c1, r2, c2;
   int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
   // Input dimensions
   printf("Enter rows and columns for first matrix: ");
   scanf("%d %d", &r1, &c1);
   printf("Enter rows and columns for second matrix: ");
   scanf("%d %d", &r2, &c2);
   // Check compatibility
   if (c1 != r2) {
       printf("Error: Columns of first matrix must equal rows of second.\n");
       return 1;
   }
   // Input first matrix
   printf("\nEnter elements of first matrix:\n");
   for (int i = 0; i < r1; i++)
       for (int j = 0; j < c1; j++)
           scanf("%d", &mat1[i][j]);
   // Input second matrix
   printf("\nEnter elements of second matrix:\n");
   for (int i = 0; i < r2; i++)
       for (int j = 0; j < c2; j++)
           scanf("%d", &mat2[i][j]);
   // Initialize result matrix to 0
   for (int i = 0; i < r1; i++)
       for (int j = 0; j < c2; j++)
           result[i][j] = 0;
   // Multiply matrices
   for (int i = 0; i < r1; i++) {
       for (int j = 0; j < c2; j++) {
           for (int k = 0; k < c1; k++) {
               result[i][j] += mat1[i][k] * mat2[k][j];
           }
       }
   }
   // Display result
   printf("\nResultant Matrix:\n");
   for (int i = 0; i < r1; i++) {
       for (int j = 0; j < c2; j++)
           printf("%d\t", result[i][j]);
       printf("\n");
   }
   return 0;
}
