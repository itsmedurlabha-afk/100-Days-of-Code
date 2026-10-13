Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>
#include <stdlib.h>

// Function to find the majority element using Boyer–Moore Voting Algorithm
int findMajorityElement(int nums[], int n) {
    int candidate = 0;
    int count = 0;

    // Phase 1: Find a candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    // Check if candidate is majority
    if (count > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int n;

    // Input size of array
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Size must be a positive integer.\n");
        return 1;
    }

    int *nums = (int *)malloc(n * sizeof(int));
    if (!nums) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            free(nums);
            return 1;
        }
    }

    // Find and print majority element
    int result = findMajorityElement(nums, n);
    printf("Majority Element: %d\n", result);

    free(nums);
    return 0;
}
