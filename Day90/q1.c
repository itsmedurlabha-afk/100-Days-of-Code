#include <stdio.h>
#include <string.h>

// Define enum for Gender
typedef enum {
    MALE = 0,
    FEMALE = 1,
    OTHER = 2
} Gender;

// Define struct containing enum Gender
typedef struct {
    char name[50];
    Gender gender;
} Person;

// Function to print gender as text
const char* getGenderString(Gender g) {
    switch (g) {
        case MALE:   return "Male";
        case FEMALE: return "Female";
        case OTHER:  return "Other";
        default:     return "Unknown";
    }
}

int main() {
    Person p;
    int genderInput;

    // Input person's name
    printf("Enter person's name: ");
    if (scanf("%49s", p.name) != 1) {
        printf("Invalid name input.\n");
        return 1;
    }

    // Input gender choice
    printf("Enter gender (0=Male, 1=Female, 2=Other): ");
    if (scanf("%d", &genderInput) != 1 || genderInput < 0 || genderInput > 2) {
        printf("Invalid gender input.\n");
        return 1;
    }

    // Assign gender
    p.gender = (Gender)genderInput;

    // Output result
    printf("Name: %s\n", p.name);
    printf("Gender: %s\n", getGenderString(p.gender));

    return 0;
}
