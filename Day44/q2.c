Replace spaces with hyphens in a string.
#include <stdio.h>
#include <string.h>

// Function to replace spaces with hyphens in a string
void replaceSpacesWithHyphens(char *str) {
    if (str == NULL) return; // Safety check

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}

int main() {
    char str[256]; // Buffer for input string

    printf("Enter a string (max 255 characters): ");

    // Read input safely
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline from fgets
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Handle empty string case
    if (strlen(str) == 0) {
        printf("Empty string entered.\n");
        return 0;
    }

    // Replace spaces with hyphens
    replaceSpacesWithHyphens(str);

    // Output result
    printf("String after replacing spaces: %s\n", str);

    return 0;
}
