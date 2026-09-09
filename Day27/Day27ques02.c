Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 4; // Number of rows for the upper half (including the center line)

    // 1. Upper half of the diamond (including the middle row)
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // 2. Lower half of the diamond
    for (i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
