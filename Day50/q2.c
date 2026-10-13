Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

// Function to print all substrings of a given string
void printSubstrings(const char *str) {
    int len = strlen(str);

    // Edge case: empty string
    if (len == 0) {
        printf("The string is empty. No substrings to display.\n");
        return;
    }

    // Generate all substrings
    for (int start = 0; start < len; start++) {
        for (int end = start; end < len; end++) {
            // Print substring from start to end
            for (int k = start; k <= end; k++) {
                putchar(str[k]);
            }
            putchar('\n'); // New line after each substring
        }
    }
}

int main() {
    char input[100];

    printf("Enter a string (max 99 characters): ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove newline character if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    printf("\nAll substrings:\n");
    printSubstrings(input);

    return 0;
}
