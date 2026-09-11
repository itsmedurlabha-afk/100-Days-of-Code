Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100  // Maximum allowed array size

// Function to insert an element into a sorted array
int insertSorted(int arr[], int n, int element) {
    if (n >= MAX_SIZE) {
        printf("Error: Array is already full.\n");
        return n; // No insertion
    }

    int i = n - 1;

    // Shift elements to the right until the correct position is found
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the element at the found position
    arr[i + 1] = element;

    return n + 1; // New size of the array
}

int main() {
    int arr[MAX_SIZE];
    int n, element;

    // Input array size
    printf("Enter number of elements in sorted array (max %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE) {
        printf("Invalid size.\n");
        return 1;
    }

    // Input sorted array elements
    printf("Enter %d sorted integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        // Optional: Check if array is sorted
        if (i > 0 && arr[i] < arr[i - 1]) {
            printf("Error: Array is not sorted.\n");
            return 1;
        }
    }

    // Input element to insert
    printf("Enter element to insert: ");
    if (scanf("%d", &element) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Insert element
    n = insertSorted(arr, n, element);

    // Display updated array
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
