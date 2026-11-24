#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Ask user for number of elements
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Exit with error
    }

    int arr[n]; // Variable Length Array (VLA) - valid in C99 and above

    // Assign explicit values starting from 10
    for (int i = 0; i < n; i++) {
        arr[i] = 10 + i; // Explicitly assign increasing values
    }

    // Print the values
    printf("Assigned values:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0; // Successful execution
}
