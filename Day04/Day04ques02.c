Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate sum using a loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
