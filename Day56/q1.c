Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve
#include <stdio.h>

// Function to find Next Greater Element using brute force
void findNextGreater(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int nextGreater = -1; // Default value if no greater element found

        // Check elements to the right of arr[i]
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; // Stop at the first greater element
            }
        }

        // Print result with comma separation
        printf("%d", nextGreater);
        if (i < n - 1) {
            printf(","); // Add comma except after last element
        }
    }
    printf("\n");
}

int main() {
    int n;

    // Input array size
    printf("Enter number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int arr[n];

    // Input array elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    // Find and print Next Greater Elements
    findNextGreater(arr, n);

    return 0;
}
