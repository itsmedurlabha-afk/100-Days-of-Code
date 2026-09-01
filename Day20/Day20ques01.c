Write a program to find the product of odd digits of a number
#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1;
    int has_odd = 0;

    // Prompt user for input
    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Make the number positive if it's negative
    if (num < 0) {
        num = -num;
    }

    // Handle the special case where input is 0
    if (num == 0) {
        has_odd = 0;
    } else {
        // Extract and check each digit
        while (num > 0) {
            remainder = num % 10; // Get the last digit
            
            if (remainder % 2 != 0) { // Check if the digit is odd
                product *= remainder;
                has_odd = 1; // Mark that we found at least one odd digit
            }
            
            num /= 10; // Remove the last digit
        }
    }

    // Print the result based on whether odd digits were found
    if (has_odd) {
        printf("The product of the odd digits is: %lld\n", product);
    } else {
        printf("The number contains no odd digits. Product is: 0\n");
    }

    return 0;
}   

