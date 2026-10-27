Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;

    // Open the file "info.txt" in read mode ("r")
    file = fopen("info.txt", "r");

    // Check if the file exists and opened successfully
    if (file == NULL) {
        printf("Error: Could not open file info.txt\n");
        return 1; 
    }

    // Read characters one by one until EOF (End of File) is reached
    while ((ch = fgetc(file)) != EOF) {
        // Print each character to the console
        putchar(ch);
    }

    // Always close the file stream when finished
    fclose(file);

    return 0;
}
