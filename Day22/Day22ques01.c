Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int num, originalNum, rem, sum = 0;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for final comparison
    originalNum = num;

    // Process each digit
    while (num > 0) {
        rem = num % 10; // Extract the last digit

        // Calculate factorial of the digit
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }

        // Add the factorial to the sum
        sum += fact;
        
        // Remove the last digit from the number
        num /= 10;
    }

    // Check if the sum of factorials matches the original number
    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}
