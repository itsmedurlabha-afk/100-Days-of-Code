Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int current_odd = 1;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        sum += current_odd;
        current_odd += 2;
    }
    
    printf("The sum is: %d\n", sum);
    
    return 0;
}
