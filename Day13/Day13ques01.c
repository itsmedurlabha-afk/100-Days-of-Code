Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    int int1, int2, modResult;

    // Prompt user for the operator
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    // Prompt user for two numbers
    printf("Enter two operands: ");
    
    // Check if the operator is modulus, as it requires integers
    if (operator == '%') {
        if (scanf("%d %d", &int1, &int2) != 2) {
            printf("Error: Modulus requires integer inputs.\n");
            return 1;
        }
    } else {
        if (scanf("%lf %lf", &num1, &num2) != 2) {
            printf("Error: Invalid numeric input.\n");
            return 1;
        }
    }

    // Perform operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
            
        case '%':
            if (int2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                modResult = int1 % int2;
                printf("%d %% %d = %d\n", int1, int2, modResult);
            }
            break;
            
        default:
            printf("Error: Invalid operator entered.\n");
    }

    return 0;
}
