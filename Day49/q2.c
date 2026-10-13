Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 200

int main() {
    char name[MAX_LEN];

    printf("Enter full name: ");
    if (!fgets(name, sizeof(name), stdin)) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline if present
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    // Tokenize the name by spaces
    char *token = strtok(name, " ");
    char *surname = NULL;

    // Store initials for all but the last word
    while (token != NULL) {
        surname = token; // Last token will be surname
        token = strtok(NULL, " ");
        if (token != NULL) {
            // Print first letter as uppercase followed by a dot
            printf("%c.", toupper((unsigned char)surname[0]));
        }
    }

    // Print surname in full
    if (surname != NULL) {
        printf(" %s\n", surname);
    } else {
        printf("\n");
    }

    return 0;
}
