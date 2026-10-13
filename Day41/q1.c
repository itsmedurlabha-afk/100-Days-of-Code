Count characters in a string without using built-in length functions.
#include <stdio.h>

// Function to count characters without using strlen()
int countCharacters(const char *str) {
    int count = 0;

    // Traverse until null terminator is found
    while (str[count] != '\0') {
        count++;
    }

    return count;
}

int main() {
    char str[1000]; // Buffer for input string

    printf("Enter a string: ");

    // Read input safely (including spaces)
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove newline character if present
    int len = countCharacters(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Length of the string: %d\n", len);

    return 0;
}
