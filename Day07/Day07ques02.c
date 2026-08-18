Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main() {
    char ch;

    // Ask the user to enter a character
    printf("Enter any character: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet letter
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        
        // Check for lowercase and uppercase vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
        
    } else {
        // If the character is a number or symbol
        printf("%c is not an alphabet letter.\n", ch);
    }

    return 0;
}
