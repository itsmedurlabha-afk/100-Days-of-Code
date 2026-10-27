Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
#include <stdio.h>
#include <stdlib.h>
#include <algorithm.h>
int kthSmallest(int arr[], int k) {
int index = k - 1;
for (int i = 0; i < arr.length; i++) {
if (arr[i] > arr[i + 1]) {
arr[i] = arr[i + 1];
arr[i + 1] = arr[i];
}
index = min(index, i + k);
}
return arr[index];
}
