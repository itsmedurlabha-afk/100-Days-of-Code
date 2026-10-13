Remove all vowels from a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower((unsigned char)ch); // Convert to lowercase for uniform check
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to remove vowels from a string in-place
void removeVowels(char *str) {
    int readIndex = 0, writeIndex = 0;

    while (str[readIndex] != '\0') {
        if (!isVowel(str[readIndex])) {
            str[writeIndex++] = str[readIndex];
        }
        readIndex++;
    }
    str[writeIndex] = '\0'; // Null-terminate the modified string
}

int main() {
    char input[256]; // Buffer for input string

    printf("Enter a string: ");
    // Safe input reading
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    removeVowels(input);

    printf("String without vowels: %s\n", input);

    return 0;
}
