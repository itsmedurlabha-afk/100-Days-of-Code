Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    // Assuming a maximum length of 64 characters for the binary string
    char binary[65]; 
    
    printf("Enter a binary number: ");
    scanf("%64s", binary);
    
    // Loop through each character until the end of the string
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            printf("\nError: Invalid binary digit '%c' detected.\n", binary[i]);
            return 1;
        }
    }
    
    printf("The 1's complement is: %s\n", binary);
    
    return 0;
}
