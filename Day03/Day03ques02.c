Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int first = 10;
    int second = 20;
    int temp; // The third variable

    // Before swap
    printf("Before: first = %d, second = %d\n", first, second);

    // Swapping logic
    temp = first;   
    first = second; 
    second = temp;  

    // After swap
    printf("After: first = %d, second = %d\n", first, second);

    return 0;
}
