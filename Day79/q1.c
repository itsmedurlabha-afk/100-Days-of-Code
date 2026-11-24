#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int num;
    long long sum = 0;      // Use long long to handle large sums
    int count = 0;
    double average;

    // Open the file for reading
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1; // Exit with error code
    }

    // Read integers from the file
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // Close the file
    fclose(file);

    // Handle case where file has no valid integers
    if (count == 0) {
        printf("No valid integers found in the file.\n");
        return 0;
    }

    // Calculate average
    average = (double)sum / count;

    // Print results
    printf("Sum: %lld\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
