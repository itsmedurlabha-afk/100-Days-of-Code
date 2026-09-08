Find the maximum and minimum element in an array.
#include <stdio.h>
#include <limits.h> // For INT_MIN and INT_MAX

int main() {
    int n;

    // Input array size
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer for size.\n");
        return 1;
    }

    int arr[n];

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    // Initialize min and max
    int min = INT_MAX;
    int max = INT_MIN;

    // Find min and max
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Output results
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}
