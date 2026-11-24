#include <stdio.h>
#include <string.h>

// Define a structure to hold person details
struct Person {
    char name[50];
    int age;
    float height;
};

// Function that accepts a structure as a parameter and prints its members
void printPerson(struct Person p) {
    printf("\n--- Person Details ---\n");
    printf("Name   : %s\n", p.name);
    printf("Age    : %d\n", p.age);
    printf("Height : %.2f meters\n", p.height);
}

int main() {
    struct Person person;

    // Input name
    printf("Enter name: ");
    if (fgets(person.name, sizeof(person.name), stdin) == NULL) {
        printf("Error reading name.\n");
        return 1;
    }
    // Remove newline character if present
    size_t len = strlen(person.name);
    if (len > 0 && person.name[len - 1] == '\n') {
        person.name[len - 1] = '\0';
    }

    // Input age
    printf("Enter age: ");
    if (scanf("%d", &person.age) != 1 || person.age < 0) {
        printf("Invalid age.\n");
        return 1;
    }

    // Input height
    printf("Enter height in meters: ");
    if (scanf("%f", &person.height) != 1 || person.height <= 0) {
        printf("Invalid height.\n");
        return 1;
    }

    // Pass structure to function
    printPerson(person);

    return 0;
}
