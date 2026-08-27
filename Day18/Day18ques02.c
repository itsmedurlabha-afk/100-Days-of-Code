Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int num1, num2, a, b, temp;

    // Prompt user for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Store original values into temporary variables
    a = num1;
    b = num2;

    // Euclidean Algorithm using a while loop
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    // Output the result
    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, a);

    return 0;
}
