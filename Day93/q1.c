#include <stdio.h>
#include <string.h>

// Structure to store student details
typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

int main() {
    int n;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Number of students must be a positive integer.\n");
        return 1;
    }

    Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        // Read name safely
        scanf(" %[^\n]", students[i].name);

        printf("Roll number: ");
        if (scanf("%d", &students[i].roll) != 1) {
            printf("Invalid roll number.\n");
            return 1;
        }

        printf("Marks: ");
        if (scanf("%f", &students[i].marks) != 1 || students[i].marks < 0) {
            printf("Invalid marks.\n");
            return 1;
        }
    }

    // Find highest marks
    float highestMarks = students[0].marks;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > highestMarks) {
            highestMarks = students[i].marks;
        }
    }

    // Print students with highest marks
    printf("\nStudent(s) with highest marks (%.2f):\n", highestMarks);
    for (int i = 0; i < n; i++) {
        if (students[i].marks == highestMarks) {
            printf("Name: %s\n", students[i].name);
            printf("Roll Number: %d\n", students[i].roll);
            printf("Marks: %.2f\n\n", students[i].marks);
        }
    }

    return 0;
}
