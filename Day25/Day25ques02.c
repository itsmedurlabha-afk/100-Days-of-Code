Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
#include <stdio.h>

int main() {
    int i, j;
    
    // Outer loop for the 5 rows (counting down from 5 to 1)
    for (i = 5; i >= 1; i--) {
        // Inner loop to print 'i' number of stars in the current row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after printing a row
        printf("\n");
    }
    
    return 0;
}
