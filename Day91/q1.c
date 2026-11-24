#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];   // Student's name (string)
    int roll;        // Roll number
    float marks;     // Marks obtained
};

int main() {
    struct Student s;  // Declare a Student variable

    // Prompt and read input
    printf("Enter student's name: ");
    fgets(s.name, sizeof(s.name), stdin);  // Read name (allows spaces)

    printf("Enter roll number: ");
    scanf("%d", &s.roll);                  // Read roll number

    printf("Enter marks: ");
    scanf("%f", &s.marks);                  // Read marks

    // Clear the newline character from buffer
    getchar();

    // Print the entered data
    printf("\n--- Student Information ---\n");
    printf("Name: "); printf("%s", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
