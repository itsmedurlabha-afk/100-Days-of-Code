#include <stdio.h>

int main(void) {
    char filename[100];
    FILE *fp;
    char ch;

    // Ask the user for a filename
    printf("Enter filename: ");
    if (fgets(filename, sizeof(filename), stdin) != NULL) {
        // Remove trailing newline if present
        size_t len = strlen(filename);
        if (len > 0 && filename[len - 1] == '\n') {
            filename[len - 1] = '\0';
        }
    } else {
        printf("Error: No input provided.\n");
        return 1;
    }

    // Try to open the file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened!\n");
        return 1;
    }

    // Read and display the file content
    printf("File opened successfully.\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(fp);
    return 0;
}
