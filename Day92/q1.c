#include <stdio.h>
#include <string.h>

// Define a structure to store student details
typedef struct {
    char name[50];
    int rollNumber;
    int age;
    float totalMarks;
} Student;

int main() {
    Student students[5]; // Array to store 5 students
    int i;

    printf("Enter details for 5 students:\n");

    for (i = 0; i < 5; i++) {
        printf("\n--- Student %d ---\n", i + 1);

        // Input name
        printf("Name: ");
        // Use fgets for safer input
        fgets(students[i].name, sizeof(students[i].name), stdin);
        // Remove newline character if present
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        // Input roll number with validation
        printf("Roll Number: ");
        if (scanf("%d", &students[i].rollNumber) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }

        // Input age with validation
        printf("Age: ");
        if (scanf("%d", &students[i].age) != 1 || students[i].age <= 0) {
            printf("Invalid age.\n");
            return 1;
        }

        // Input total marks with validation
        printf("Total Marks: ");
        if (scanf("%f", &students[i].totalMarks) != 1 || students[i].totalMarks < 0) {
            printf("Invalid marks.\n");
            return 1;
        }

        // Clear input buffer after scanf
        while (getchar() != '\n');
    }

    // Display all student details
    printf("\n===== Student Details =====\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name        : %s\n", students[i].name);
        printf("Roll Number : %d\n", students[i].rollNumber);
        printf("Age         : %d\n", students[i].age);
        printf("Total Marks : %.2f\n", students[i].totalMarks);
    }

    return 0;
}
