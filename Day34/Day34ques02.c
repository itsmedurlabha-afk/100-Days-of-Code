Delete an element from an array.

C#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main() {
    int arr[MAX_SIZE];
    int n, pos, i;

    // Input array size
    printf("Enter number of elements (1-%d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIZE) {
        printf("Invalid size.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    // Input position to delete
    printf("Enter position to delete (1-%d): ", n);
    if (scanf("%d", &pos) != 1 || pos < 1 || pos > n) {
        printf("Invalid position.\n");
        return 1;
    }

    // Shift elements to the left from the position
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // Reduce array size

    // Display updated array
    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


