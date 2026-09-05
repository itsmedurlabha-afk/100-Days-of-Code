Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

#include <stdio.h>

int main() {
    int rows = 10; // You can adjust the number of lines here

    for (int i = 0; i < rows; i++) {
        // Print the spaces before the asterisk
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // Print the asterisk and move to the next line
        printf("*\n");
    }

    return 0;
}
