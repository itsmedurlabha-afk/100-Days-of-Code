Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
#include <stdlib.h>

// Function to find maximum sum of subarrays of size k
int maxSumSubarray(int arr[], int n, int k) {
    if (k > n || k <= 0) {
        printf("Invalid value of k. It must be between 1 and %d.\n", n);
        return -1;
    }

    // Calculate sum of first window of size k
    int window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    int max_sum = window_sum;

    // Slide the window
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k]; // Add new element, remove old
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    return max_sum;
}

int main() {
    int n, k;

    // Input array size
    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            free(arr);
            return 1;
        }
    }

    // Input k
    printf("Enter the value of k: ");
    if (scanf("%d", &k) != 1) {
        printf("Invalid input for k.\n");
        free(arr);
        return 1;
    }

    // Calculate and print result
    int result = maxSumSubarray(arr, n, k);
    if (result != -1) {
        printf("Maximum sum of subarrays of size %d is: %d\n", k, result);
    }

    free(arr);
    return 0;
}
