Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the size of the array (n): ");
    
    // Validate input for n
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int arr[n]; // Array of size n
    printf("Enter %d integers between 0 and %d (one number missing):\n", n, n);

    long long sum = 0; // Use long long to avoid overflow for large n
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
        // Validate range
        if (arr[i] < 0 || arr[i] > n) {
            printf("Invalid number: %d. Must be between 0 and %d.\n", arr[i], n);
            return 1;
        }
        sum += arr[i];
    }

    // Expected sum of numbers from 0 to n
    long long expected_sum = (long long)n * (n + 1) / 2;

    // Missing number
    long long missing = expected_sum - sum;
    printf("The missing number is: %lld\n", missing);

    return 0;
}
