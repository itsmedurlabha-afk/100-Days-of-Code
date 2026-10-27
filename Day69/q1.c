Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Input array size
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 1) {
        printf("Invalid input. Size must be an integer greater than 1.\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers (1 to %d, with exactly one repeated):\n", n, n - 1);
    long long sum = 0; // Use long long to avoid overflow for large n

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            free(arr);
            return 1;
        }
        sum += arr[i]; // Accumulate sum in one iteration
    }

    // Expected sum of numbers from 1 to n-1
    long long expected_sum = (long long)(n - 1) * n / 2;

    // The repeated element is the difference
    long long repeated = sum - expected_sum;

    printf("Repeated element: %lld\n", repeated);

    free(arr);
    return 0;
}
