Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int num, remainder, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number to print at the end
    int originalNum = num; 

    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }

    // Loop to extract and add digits
    while (num > 0) {
        remainder = num % 10;  // Get the last digit
        sum = sum + remainder; // Add it to the sum
        num = num / 10;        // Remove the last digit
    }

    printf("The sum of digits of %d is: %d\n", originalNum, sum);

    return 0;
}
