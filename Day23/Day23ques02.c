Write a program to print the following pattern:
*****
*****
*****
*****
*****
#include <stdio.h>

int main() {
    int i, j;

    // Loop through 5 rows
    for(i = 0; i < 5; i++) {
        // Loop to print 5 stars in each row
        for(j = 0; j < 5; j++) {
            printf("*");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
