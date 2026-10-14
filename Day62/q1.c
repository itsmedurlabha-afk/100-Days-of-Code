Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>
#include <limits.h> // For INT_MIN

// Function to find maximum subarray sum using Kadane's Algorithm
int maxSubarraySum(int arr[], int n) {
    int max_so_far = INT_MIN; // Stores the overall maximum sum
    int max_ending_here = 0;  // Stores the sum of current subarray

    for (int i = 0; i < n; i++) {
        max_ending_here += arr[i];

        // Update overall max if current sum is greater
        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }

        // If current sum becomes negative, reset it to 0
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }

    return max_so_far;
}

int main() {
    int n;

    // Input array size
    printf("Enter number of elements: ");
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

    // Special handling: if all numbers are negative
    int all_negative = 1;
    int largest_negative = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            all_negative = 0;
            break;
        }
        if (arr[i] > largest_negative) {
            largest_negative = arr[i];
        }
    }

    int result;
    if (all_negative) {
        result = largest_negative; // Largest negative number
    } else {
        result = maxSubarraySum(arr, n);
    }

    printf("Maximum subarray sum: %d\n", result);

    return 0;
}
