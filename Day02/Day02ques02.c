Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

// Define the value of Pi
#define PI 3.14159

int main() {
    float radius, area, circumference;

    // Ask the user to type in the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area (Pi * radius * radius)
    area = PI * radius * radius;

    // Calculate the circumference (2 * Pi * radius)
    circumference = 2 * PI * radius;

    // Show the results to the user with 2 decimal places
    printf("The area of the circle is: %.2f\n", area);
    printf("The circumference of the circle is: %.2f\n", circumference);

    return 0;
}
