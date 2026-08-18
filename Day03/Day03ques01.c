Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Ask the user for the temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Calculate the temperature in Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Show the result to the user
    printf("%.2f°C is equal to %.2f°F\n", celsius, fahrenheit);

    return 0;
}
