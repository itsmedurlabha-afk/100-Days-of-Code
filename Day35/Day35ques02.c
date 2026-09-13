Rotate an array to the right by k positions

#include <stdio.h>
#include <stdlib.h>
int main() {
int arr, n, d; [^1^]
printf("Enter array size: ");
scanf("%d", &n);
printf("Enter number of positions to rotate: ");
scanf("%d", &d);
printf("Enter array elements: ");
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
// Right rotate the array by d positions
for (int i = 0; i < n; i++) {
arr[i] = arr[i + d];
arr[i + d] = arr[i];
}
printf("Array after right rotation is: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}
