Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    // Ask the user for the length
    printf("Enter the length: ");
    scanf("%f", &length);

    // Ask the user for the breadth
    printf("Enter the breadth: ");
    scanf("%f", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Print the results to the screen
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}
