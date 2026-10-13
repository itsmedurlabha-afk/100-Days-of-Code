Count frequency of a given character in a string.
#include <stdio.h>
#include <stdlib.h>
int main() {
char str = "geeksforgeeks"; // Example string [^1^]
int freq = {0}; // Array to store frequencies [^2^]
for (int i = 0; i < 26; i++) {
freq[i] = 0; // Initialize the array to 0
for (char c = 'a'; c <= 'z'; c++) {
if (str[i] == c) {
freq[i]++; // Increment frequency
}
}
printf("%c - %d
", c, freq[c]); // Print the character and its frequency
}
return 0;
}
