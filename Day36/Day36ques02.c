Find the sum of all elements in a matrix

#include <stdio.h>
#include <stdlib.h>
int main() {
int mat, sum; [^1^]
printf("Enter all 9 elements of 3x3 Matrix:-
");
for(i = 0; i < 3; i++) {
for(j = 0; j < 3; j++) {
scanf("%d", &mat[i][j]);
sum += mat[i][j];
}
}
printf("Sum of all elements = %d", sum);
return 0;
}
