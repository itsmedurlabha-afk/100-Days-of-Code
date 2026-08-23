Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int found_even = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i += 2) {
        product *= i;
        found_even = 1;
    }
    
    if (found_even) {
        printf("The product of even numbers is: %lld\n", product);
    } else {
        printf("No even numbers found in this range.\n");
    }
    
    return 0;
}
