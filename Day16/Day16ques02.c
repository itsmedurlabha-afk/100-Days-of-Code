Write a program to check if a number is a palindrome.
#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    
    // Use long long to prevent integer overflow when reversing large numbers
    long long reversedNum = 0; 
    
    // Negative numbers are not palindromes
    if (num < 0) {
        return 0; 
    }
    
    // Reverse the number mathematically
    while (num > 0) {
        int lastDigit = num % 10;
        reversedNum = (reversedNum * 10) + lastDigit;
        num = num / 10;
    }
    
    // Check if original matches reversed
    return (original == reversedNum);
}

int main() {
    int inputNumber;
    
    printf("Enter an integer: ");
    if (scanf("%d", &inputNumber) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    if (isPalindrome(inputNumber)) {
        printf("%d is a palindrome.\n", inputNumber);
    } else {
        printf("%d is not a palindrome.\n", inputNumber);
    }
    
    return 0;
}
