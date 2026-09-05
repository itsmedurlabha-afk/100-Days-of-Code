Write a program to print the following pattern:
5
45
345
2345
12345
#include <stdio.h>

int main() {
    int rows = 5; // Total number of rows in the pattern

    for (int i = 1; i <= rows; i++) {
        // Start printing numbers from (rows - i + 1) up to rows
        for (int j = rows - i + 1; j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
