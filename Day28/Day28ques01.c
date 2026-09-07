Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printPrimesSieve(int n) {
    if (n < 2) {
        printf("No prime numbers in the range 1 to %d.\n", n);
        return;
    }

    // Dynamically allocate a boolean array initialized to true
    bool *isPrime = (bool *)malloc((n + 1) * sizeof(bool));
    if (isPrime == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    for (int i = 0; i <= n; i++) {
        isPrime[i] = true;
    }

    // 0 and 1 are not prime numbers
    isPrime[0] = false;
    isPrime[1] = false;

    // Eliminate non-primes up to sqrt(n)
    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    // Output all prime numbers
    printf("Prime numbers from 1 to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");

    free(isPrime);
}

int main() {
    int n;
    printf("Enter upper bound (n): ");
    if (scanf("%d", &n) == 1) {
        printPrimesSieve(n);
    }
    return 0;
}
