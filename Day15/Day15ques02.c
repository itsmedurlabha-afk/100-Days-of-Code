Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Logic to reverse the number
    while (num != 0) {
        remainder = num % 10;                  // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Append digit to reversed number
        num /= 10;                             // Remove the last digit from original number
    }

    // Output the result
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
