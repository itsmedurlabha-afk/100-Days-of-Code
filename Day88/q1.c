#include <stdio.h>

// Define an enum
typedef enum {
    RED = 1,
    GREEN,
    BLUE,
    YELLOW
} Color;

int main() {
    // Array of enum names corresponding to the enum values
    const char *colorNames[] = { "RED", "GREEN", "BLUE", "YELLOW" };

    // Array of enum values
    const Color colorValues[] = { RED, GREEN, BLUE, YELLOW };

    // Calculate number of elements
    size_t count = sizeof(colorValues) / sizeof(colorValues[0]);

    // Loop through and print each name with its value
    for (size_t i = 0; i < count; i++) {
        printf("%s = %d\n", colorNames[i], colorValues[i]);
    }

    return 0;
}
