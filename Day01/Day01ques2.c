Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    double num1, num2;
    double sum, difference, product, quotient;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Calculate standard operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Display standard operations
    printf("Sum: %.2lf\n", sum);
    printf("Difference: %.2lf\n", difference);
    printf("Product: %.2lf\n", product);

    // Handle division by zero carefully
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Quotient: %.2lf\n", quotient);
    } else {
        printf("Quotient: Error (Division by zero)\n");
    }

    return 0;
} 
