#include <stdio.h>
#include <ctype.h>  // For toupper()
#include <stdlib.h> // For exit()

int main() {
    FILE *inputFile, *outputFile;
    int ch; // Use int to handle EOF properly

    // Open input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input.txt");
        return 1;
    }

    // Open output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output.txt");
        fclose(inputFile);
        return 1;
    }

    // Read each character from input.txt
    while ((ch = fgetc(inputFile)) != EOF) {
        // Convert lowercase letters to uppercase
        fputc(toupper(ch), outputFile);
    }

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    printf("Conversion complete. Check output.txt for results.\n");
    return 0;
}
