#include <stdio.h>

// Enumeration for days of the week
enum Days {
    SUNDAY = 0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    // Array of day names corresponding to enum values
    const char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    printf("Days of the week with their integer values:\n");

    // Loop through all days and print their integer values
    for (int day = SUNDAY; day <= SATURDAY; day++) {
        printf("%s = %d\n", dayNames[day], day);
    }

    return 0;
}
