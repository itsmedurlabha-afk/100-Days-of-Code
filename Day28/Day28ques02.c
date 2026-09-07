Read and print elements of a one-dimensional array.

  #include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n;

    // Prompt user for number of elements
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
        printf("Invalid array size! Please enter a number between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    // Reading elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing elements of the array
    printf("\nThe elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
