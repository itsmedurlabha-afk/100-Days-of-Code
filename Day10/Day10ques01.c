Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

// Function to classify the triangle
void classifyTriangle(float a, float b, float c) {
    // Check if the sides can actually form a triangle
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Not a valid triangle.\n");
        return;
    }

    // Classify based on matching sides
    if (a == b && b == c) {
        printf("Equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }
}

int main() {
    float side1, side2, side3;

    printf("Enter three side lengths: ");
    if (scanf("%f %f %f", &side1, &side2, &side3) != 3) {
        printf("Invalid input. Please enter numbers.\n");
        return 1;
    }

    classifyTriangle(side1, side2, side3);

    return 0;
}
