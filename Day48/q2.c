Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse characters in a word from index 'start' to 'end'
void reverseWord(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[500];

    printf("Enter a sentence: ");
    // Read input safely (including spaces)
    if (!fgets(sentence, sizeof(sentence), stdin)) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline if present
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    int start = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        // Detect end of a word (space or end of string)
        if (sentence[i] == ' ' || sentence[i + 1] == '\0') {
            int end = (sentence[i] == ' ') ? i - 1 : i;
            if (start <= end) {
                reverseWord(sentence, start, end);
            }
            start = i + 1; // Move to start of next word
        }
    }

    printf("Sentence with each word reversed:\n%s\n", sentence);
    return 0;
}
