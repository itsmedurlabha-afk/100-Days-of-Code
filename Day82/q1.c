#include <stdio.h>

// Define an enum for traffic lights
typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;

// Function to print message based on traffic light value
void printTrafficMessage(TrafficLight light) {
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light value\n");
            break;
    }
}

int main() {
    int choice;

    printf("Enter traffic light value (0 for RED, 1 for YELLOW, 2 for GREEN): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Validate input range
    if (choice < RED || choice > GREEN) {
        printf("Invalid traffic light value. Must be 0, 1, or 2.\n");
        return 1;
    }

    // Cast integer to enum and print message
    printTrafficMessage((TrafficLight)choice);

    return 0;
}
