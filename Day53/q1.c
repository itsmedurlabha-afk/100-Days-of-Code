 Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

   #include <stdio.h>
#include <stdlib.h>

// Function to find the pivot index
int findPivotIndex(int arr[], int n) {
    long long totalSum = 0;
    long long leftSum = 0;

    // Calculate total sum of array
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Iterate to find pivot index
    for (int i = 0; i < n; i++) {
        long long rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            return i; // Return first (leftmost) pivot index
        }
        leftSum += arr[i];
    }

    return -1; // No pivot index found
}

int main() {
    int n;

    printf("Enter number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            free(arr);
            return 1;
        }
    }

    int pivotIndex = findPivotIndex(arr, n);
    printf("Pivot Index: %d\n", pivotIndex);

    free(arr);
    return 0;
}

