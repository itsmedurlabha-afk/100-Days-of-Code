Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int num;
    unsigned long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Factorials do not exist for negative numbers
    if (num < 0) {
        printf("Error! Negatives do not have factorials.\n");
    } else {
        for (int i = 1; i <= num; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", num, fact);
    }

    return 0;
}
