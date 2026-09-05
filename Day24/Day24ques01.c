Write a program to print the following pattern:
*
**
***
****
*****

#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Total number of rows in the pattern

    // Outer loop for the rows
    for (i = 1; i <= rows; i++) {
        // Inner loop to print stars in each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
