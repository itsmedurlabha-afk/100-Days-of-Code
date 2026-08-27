Write a program to check if a number is prime.
   #include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool isPrime = true;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num <= 1) {
        isPrime = false;
    } else {
        // Check for factors from 2 up to num / 2
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false; // Factor found, so it is not prime
                break;
            }
        }
    }

    // Print the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
