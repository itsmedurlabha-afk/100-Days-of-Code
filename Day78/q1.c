#include <stdio.h>
#include <ctype.h>  // for isalpha(), tolower()
#include <stdlib.h> // for exit()

// Function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower((unsigned char)ch); // normalize to lowercase
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    FILE *file;
    char filename[256];
    char ch;
    int vowelCount = 0, consonantCount = 0;

    // Ask user for file name
    printf("Enter the file name: ");
    if (scanf("%255s", filename) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Open file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha((unsigned char)ch)) { // Only process alphabetic characters
            if (isVowel(ch))
                vowelCount++;
            else
                consonantCount++;
        }
        // Ignore digits, spaces, and special characters
    }

    fclose(file);

    // Display results
    printf("Vowels: %d\n", vowelCount);
    printf("Consonants: %d\n", consonantCount);

    return 0;
}
