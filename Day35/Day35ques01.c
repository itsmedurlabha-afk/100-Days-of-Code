Find the second largest element in an array


#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int n;

    // Input array size
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid input. Array must have at least 2 elements.\n");
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

    // Initialize largest and second largest
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Find largest and second largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    // Check if second largest exists
    if (secondLargest == INT_MIN) {
        printf("No second largest element found (all elements may be equal).\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
