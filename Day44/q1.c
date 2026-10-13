Count spaces, digits, and special characters in a string.
#include <stdio.h>
int main() {
char str; // Declare a character array for the string [^1^]
int countSpaces, countDigits, countSpecialChar, countAlphabets; // Declare counters
countSpaces = countDigits = countSpecialChar = countAlphabets = 0; // Initialize counters to zero
printf("Enter a string: ");
gets(str); // Get a string from the user
for (int counter = 0; str[counter] != NULL; counter++) {
if (str[counter] == ' ') countSpaces++; // Count spaces
else if (str[counter] >= '0' && str[counter] <= '9') countDigits++; // Count digits
else countSpecialChar++; // Count special characters
}
printf("Spaces: %d
Digits: %d
Special Characters: %d
Alphabets: %d
", countSpaces, countDigits, countSpecialChar, countAlphabets);
return 0;
}
