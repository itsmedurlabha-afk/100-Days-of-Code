Check if a matrix is symmetric.
#include <stdio.h>
#include <stdlib.h>
int main() {
int n, matrix[MAX_SIZE][MAX_SIZE];
printf("Enter the size of the square matrix: ");
scanf("%d", &n);
printf("Enter matrix elements:
");
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
printf("Enter element [%d][%d]: ", i, j);
scanf("%d", &matrix[i][j]);
}
}
printf("Entered Matrix:
");
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
printf("%d ", matrix[i][j]);
}
}
int isSymmetric = 1;
for (int i = 0; i < n && isSymmetric; i++) {
for (int j = 0; j < n; j++) {
if (matrix[i][j] != matrix[j][i]) {
isSymmetric = 0;
break;
}
}
}
if (isSymmetric) {
printf("Matrix is Symmetric.
");
} else {
printf("Matrix is not Symmetric.
");
}
return 0;
}
