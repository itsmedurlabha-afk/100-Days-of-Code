Write a program to print the following pattern:
1
12
123
1234
12345

#include <stdio.h>

int main() {
    int i, j;

    // Outer loop controls the number of rows (5 rows)
    for (i = 1; i <= 5; i++) {
        
        // Inner loop prints numbers from 1 up to the current row number
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
