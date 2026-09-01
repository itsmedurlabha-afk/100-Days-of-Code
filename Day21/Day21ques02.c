Write a program to check if a number is a perfect number.
 #include <stdio.h>

int main() {
    int num, sum = 0;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Find and sum all proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors equals the original number
    if (sum == num && num > 0) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is NOT a perfect number.\n", num);
    }

    return 0;
}
