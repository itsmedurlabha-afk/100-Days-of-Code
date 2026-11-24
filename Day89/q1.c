#include <stdio.h>

enum Color {
    RED = 0,   // explicitly set to 0
    GREEN,     // automatically 1
    BLUE       // automatically 2
};

int main() {
    enum Color c = GREEN;  // GREEN is 1

    printf("RED = %d\n", (int)RED);     // cast to int for clarity
    printf("GREEN = %d\n", (int)GREEN);
    printf("BLUE = %d\n", (int)BLUE);

    printf("Variable c (GREEN) = %d\n", (int)c);

    return 0;
}
