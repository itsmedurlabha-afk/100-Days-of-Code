Print each character of a string on a new line.
#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000  // Maximum allowed string length

int main() {
    char str[MAX_LEN];

    printf("Enter a string: ");

    // Read input safely (including spaces)
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Handle empty string case
    if (len == 0) {
        printf("Empty string entered.\n");
        return 0;
    }

    printf("\nCharacters in the string:\n");

    // Print each character on a new line
    for (size_t i = 0; i < len; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
