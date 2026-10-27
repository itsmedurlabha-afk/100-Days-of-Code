Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        perror("Error opening file");
        return 1; // Exit with error code
    }

    // Take user input
    printf("Enter your name: ");
    if (scanf("%99s", name) != 1) { // Limit input to avoid buffer overflow
        printf("Invalid name input.\n");
        fclose(fp);
        return 1;
    }

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1 || age < 0) { // Validate age
        printf("Invalid age input.\n");
        fclose(fp);
        return 1;
    }

    // Write to file using fprintf
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Close file
    fclose(fp);

    // Confirmation message
    printf("Data successfully saved to info.txt\n");

    return 0;
}
