#include <stdio.h>

/* Define an enum with three states */
typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

/* Function to print a message based on the enum value */
void printStatus(Status s) {
    switch (s) {
        case SUCCESS:
            printf("Operation completed successfully.
");
            break;
        case FAILURE:
            printf("Operation failed.
");
            break;
        case TIMEOUT:
            printf("Operation timed out.
");
            break;
        default:
            printf("Unknown status.
");
    }
}

int main() {
    Status currentStatus;

    /* Example 1: SUCCESS */
    currentStatus = SUCCESS;
    printStatus(currentStatus);

    /* Example 2: FAILURE */
    currentStatus = FAILURE;
    printStatus(currentStatus);

    /* Example 3: TIMEOUT */
    currentStatus = TIMEOUT;
    printStatus(currentStatus);

    return 0;
}
