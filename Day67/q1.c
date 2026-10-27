Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>
#include <stdlib.h>

// Function to merge two sorted arrays
void mergeSortedArrays(int arr1[], int m, int arr2[], int n, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Merge elements until one array is exhausted
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements from arr1
    while (i < m) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2
    while (j < n) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int m, n;

    // Input sizes of arrays
    printf("Enter size of first sorted array (m): ");
    if (scanf("%d", &m) != 1 || m < 0) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter size of second sorted array (n): ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid size.\n");
        return 1;
    }

    // Allocate memory for arrays
    int *arr1 = (int *)malloc(m * sizeof(int));
    int *arr2 = (int *)malloc(n * sizeof(int));
    int *merged = (int *)malloc((m + n) * sizeof(int));

    if (!arr1 || !arr2 || !merged) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input first sorted array
    printf("Enter %d elements of first sorted array: ", m);
    for (int i = 0; i < m; i++) {
        if (scanf("%d", &arr1[i]) != 1) {
            printf("Invalid input.\n");
            free(arr1); free(arr2); free(merged);
            return 1;
        }
    }

    // Input second sorted array
    printf("Enter %d elements of second sorted array: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr2[i]) != 1) {
            printf("Invalid input.\n");
            free(arr1); free(arr2); free(merged);
            return 1;
        }
    }

    // Merge arrays
    mergeSortedArrays(arr1, m, arr2, n, merged);

    // Print merged sorted array
    printf("Merged sorted array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr1);
    free(arr2);
    free(merged);

    return 0;
}
