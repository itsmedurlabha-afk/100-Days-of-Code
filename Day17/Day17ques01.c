Write a program to check if a number is an Armstrong number.
 #include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Find the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = num;

    // Check for Armstrong condition
    while (temp != 0) {
        remainder = temp % 10;
        // round() handles potential floating-point precision issues with pow()
        result += round(pow(remainder, n));
        temp /= 10;
    }

    // Display result
    if (result == originalNum)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

