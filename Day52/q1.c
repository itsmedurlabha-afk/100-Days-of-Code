Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>
#include <stdlib.h>

// Function to find the ceil index using binary search
int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1; // Default: no ceil found

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            // Potential ceil found, but check for earlier occurrence
            result = mid;
            high = mid - 1; // Search left side for smaller index
        } else {
            low = mid + 1; // Search right side
        }
    }
    return result;
}

int main() {
    int n, x;

    // Input array size
    printf("Enter number of elements in sorted array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input sorted array
    printf("Enter %d sorted integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            free(arr);
            return 1;
        }
    }

    // Input x
    printf("Enter integer x: ");
    if (scanf("%d", &x) != 1) {
        printf("Invalid input.\n");
        free(arr);
        return 1;
    }

    // Find ceil index
    int index = findCeilIndex(arr, n, x);

    // Output result
    if (index != -1) {
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);
    } else {
        printf("-1\n"); // No ceil found
    }

    free(arr);
    return 0;
}
