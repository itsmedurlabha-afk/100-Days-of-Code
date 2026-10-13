Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

// Function to calculate sum from 1 to k using formula k*(k+1)/2
long long sum_upto(int k) {
    return (long long)k * (k + 1) / 2;
}

int main() {
    int n;

    // Input validation
    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int pivot = -1; // Default value if no pivot found

    // Total sum from 1 to n
    long long total_sum = sum_upto(n);

    // Check each possible pivot x
    for (int x = 1; x <= n; x++) {
        long long left_sum = sum_upto(x);
        long long right_sum = total_sum - sum_upto(x - 1);

        if (left_sum == right_sum) {
            pivot = x;
            break; // Since at most one pivot exists
        }
    }

    printf("%d\n", pivot);
    return 0;
}
