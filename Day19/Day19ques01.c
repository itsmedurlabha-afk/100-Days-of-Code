Write a program to find the LCM of two numbers.
#include <stdio.h>

// Function to find the Greatest Common Divisor (GCD) using Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the Least Common Multiple (LCM)
int findLCM(int a, int b) {
    // Handling negative inputs by converting to positive
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    // LCM formula
    return (a * b) / findGCD(a, b);
}

int main() {
    int num1, num2, lcm;

    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    // Edge case handling for zero
    if (num1 == 0 || num2 == 0) {
        printf("LCM of 0 and any number is 0.\n");
        return 0;
    }

    lcm = findLCM(num1, num2);

    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
