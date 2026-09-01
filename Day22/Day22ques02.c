Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Input the number of terms
    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    // Add the first term which is explicitly 1
    sum += 1.0;

    // Loop to calculate and add the remaining terms
    for (int i = 2; i <= n; i++) {
        double numerator = 2 * i - 1;
        double denominator = 2 * i;
        sum += numerator / denominator;
    }

    // Display the final sum
    printf("The sum of the series up to %d terms is: %.6lf\n", n, sum);

    return 0;
}
