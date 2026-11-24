#include <stdio.h>

// Enum to represent menu choices
typedef enum {
    ADD = 1,       // Start from 1 for user-friendly menu
    SUBTRACT,
    MULTIPLY
} Operation;

int main() {
    int choice;
    double num1, num2, result;

    // Display menu
    printf("=== Simple Calculator ===\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice (1-3): ");

    // Validate menu choice input
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Please enter a number between 1 and 3.\n");
        return 1;
    }

    // Check if choice is within valid range
    if (choice < ADD || choice > MULTIPLY) {
        printf("Invalid choice. Please select between 1 and 3.\n");
        return 1;
    }

    // Input two numbers
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Invalid input. Please enter numeric values.\n");
        return 1;
    }

    // Perform operation based on enum choice
    switch ((Operation)choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;

        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;

        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;

        default:
            // This should never happen due to earlier validation
            printf("Unknown operation.\n");
            break;
    }

    return 0;
}
