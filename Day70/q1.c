Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to convert a string to sentence case
void toSentenceCase(char *str) {
    int capitalizeNext = 1; // Flag to indicate if next letter should be capitalized

    for (int i = 0; str[i] != '\0'; i++) {
        // Convert all characters to lowercase first
        str[i] = tolower((unsigned char)str[i]);

        // If we need to capitalize and current char is a letter
        if (capitalizeNext && isalpha((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]);
            capitalizeNext = 0; // Reset flag
        }

        // If we encounter sentence-ending punctuation, set flag
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalizeNext = 1;
        }
    }
}

int main() {
    char input[500];

    printf("Enter a string: ");
    // Read full line including spaces
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    toSentenceCase(input);

    printf("Sentence case: %s\n", input);

    return 0;
}
