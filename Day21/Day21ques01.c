Write a program to swap the first and last digit of a number.
 #include <stdio.h>
#include <math.h>

int main() {
    int num, first_digit, last_digit, digits, swapped_num;

    // Input the number from user
    printf("Enter any number: ");
    scanf("%d", &num);

    // Find the last digit
    last_digit = num % 10;

    // Find total number of digits - 1 to determine the place value
    digits = (int)log10(num);

    // Find the first digit
    first_digit = (int)(num / pow(10, digits));

    // Reconstruction formula to swap the first and last digits
    swapped_num = last_digit * pow(10, digits); // Move last digit to first position
    swapped_num += num % (int)pow(10, digits); // Add the middle digits
    swapped_num -= last_digit;                 // Remove the original last digit
    swapped_num += first_digit;                // Add the first digit to the end

    printf("Original number: %d\n", num);
    printf("Swapped number:  %d\n", swapped_num);

    return 0;
}
