Count positive, negative, and zero elements in an array.

  #include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Input array size
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    if (n == 0) {
        printf("Array is empty. Positives: 0, Negatives: 0, Zeros: 0\n");
        return 0;
    }

    int arr[n];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    // Count positives, negatives, and zeros
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    // Output results
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zeros: %d\n", zeroCount);

    return 0;
}
