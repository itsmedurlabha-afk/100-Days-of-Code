Insert an element in an array at a given position.

C#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main() {
    int arr[MAX_SIZE];
    int n, pos, value;

    //  Input array size
    printf("Enter number of elements (max %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE) {
        printf("Invalid size.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    //  Input position (1-based index) and value
    printf("Enter position to insert (1 to %d): ", n + 1);
    if (scanf("%d", &pos) != 1 || pos < 1 || pos > n + 1) {
        printf("Invalid position.\n");
        return 1;
    }

    printf("Enter value to insert: ");
    if (scanf("%d", &value) != 1) {
        printf("Invalid value.\n");
        return 1;
    }

    //  Check if array has space
    if (n >= MAX_SIZE) {
        printf("Array is full. Cannot insert.\n");
        return 1;
    }

    //  Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new value
    arr[pos - 1] = value;
    n++;

    //  Display updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


