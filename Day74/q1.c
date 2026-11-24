#include <stdio.h>
#include <stdlib.h>  // For exit()

int main() {
    FILE *source, *destination;
    char ch;  // Variable to store each character
    char filename[100];  // To store filenames

    // Prompt for source file name
    printf("Enter the source file name: ");
    scanf("%s", filename);

    // Open source file for reading
    source = fopen(filename, "r");
    if (source == NULL) {
        printf("Error: Cannot open source file!\n");
        exit(1);
    }

    // Prompt for destination file name
    printf("Enter the destination file name: ");
    scanf("%s", filename);

    // Open destination file for writing
    destination = fopen(filename, "w");
    if (destination == NULL) {
        printf("Error: Cannot create destination file!\n");
        fclose(source);
        exit(1);
    }

    // Copy contents character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    // Close both files
    fclose(source);
    fclose(destination);

    printf("Contents copied successfully!\n");
    return 0;
}
