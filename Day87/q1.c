#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Define enum for user roles
typedef enum {
    ADMIN,
    USER,
    GUEST,
    INVALID_ROLE
} Role;

// Function to convert string to uppercase
void to_uppercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper((unsigned char)str[i]);
    }
}

// Function to get role from string
Role get_role_from_string(const char *input) {
    if (strcmp(input, "ADMIN") == 0) return ADMIN;
    if (strcmp(input, "USER") == 0) return USER;
    if (strcmp(input, "GUEST") == 0) return GUEST;
    return INVALID_ROLE;
}

int main() {
    char input[20];

    printf("Enter role (ADMIN, USER, GUEST): ");
    if (scanf("%19s", input) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Convert input to uppercase for case-insensitive matching
    to_uppercase(input);

    Role role = get_role_from_string(input);

    // Display message based on role
    switch (role) {
        case ADMIN:
            printf("Welcome, Administrator! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have view-only access.\n");
            break;
        default:
            printf("Error: Invalid role entered.\n");
            break;
    }

    return 0;
}
