#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

    // Prompt the user for a filename
    printf("Enter filename: ");
    if (fgets(filename, sizeof(filename), stdin) != NULL) {
        // Remove trailing newline if present
        int len = strlen(filename);
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
        printf("Error: File does not exist!\n");
        return 1;
    }

    // File opened successfully, read and display its content
    printf("File opened successfully.\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(fp);
    return 0;
}

