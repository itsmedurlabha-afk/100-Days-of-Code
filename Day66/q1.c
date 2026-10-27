Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
#include <stdio.h>
#include <stdlib.h>

// Function to find two indices whose sum equals target
void findTwoSum(int nums[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return; // Found the pair, exit function
            }
        }
    }
    // No pair found
    printf("-1 -1\n");
}

int main() {
    int n, target;

    // Input array size
    printf("Enter number of elements in array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Array size must be a positive integer.\n");
        return 1;
    }

    int *nums = (int *)malloc(n * sizeof(int));
    if (!nums) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1 || nums[i] <= 0) {
            printf("Invalid input. All elements must be positive integers.\n");
            free(nums);
            return 1;
        }
    }

    // Input target value
    printf("Enter target value: ");
    if (scanf("%d", &target) != 1 || target <= 0) {
        printf("Invalid input. Target must be a positive integer.\n");
        free(nums);
        return 1;
    }

    // Find and print indices
    findTwoSum(nums, n, target);

    free(nums);
    return 0;
}
