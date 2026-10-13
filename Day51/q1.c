Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>

// Function to find the first occurrence of target using binary search
int findFirstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;      // store index
            high = mid - 1;    // search left side for earlier occurrence
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

// Function to find the last occurrence of target using binary search
int findLastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;      // store index
            low = mid + 1;     // search right side for later occurrence
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, target;

    // Input array size
    printf("Enter number of elements in sorted array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int nums[n];

    // Input sorted array
    printf("Enter %d sorted integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    // Input target
    printf("Enter target integer: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Find first and last occurrence
    int first = findFirstOccurrence(nums, n, target);
    int last = findLastOccurrence(nums, n, target);

    // Output results
    if (first == -1) {
        printf("-1, -1\n"); // target not found
    } else {
        printf("First occurrence index: %d\n", first);
        printf("Last occurrence index: %d\n", last);
    }

    return 0;
}
