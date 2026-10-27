Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if two strings are anagrams
int areAnagrams(const char *s, const char *t) {
    // If lengths differ, they can't be anagrams
    if (strlen(s) != strlen(t)) {
        return 0;
    }

    int freq[26] = {0}; // Frequency array for lowercase letters

    // Count characters from first string
    for (int i = 0; s[i] != '\0'; i++) {
        if (!islower(s[i])) { // Validate lowercase
            return -1; // Invalid character
        }
        freq[s[i] - 'a']++;
    }

    // Subtract counts using second string
    for (int i = 0; t[i] != '\0'; i++) {
        if (!islower(t[i])) { // Validate lowercase
            return -1; // Invalid character
        }
        freq[t[i] - 'a']--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return 0; // Not anagram
        }
    }

    return 1; // Anagram
}

int main() {
    char s[101], t[101]; // Limit strings to 100 chars

    printf("Enter first string (lowercase only): ");
    if (scanf("%100s", s) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter second string (lowercase only): ");
    if (scanf("%100s", t) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int result = areAnagrams(s, t);

    if (result == -1) {
        printf("Error: Only lowercase letters are allowed.\n");
    } else if (result == 1) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
