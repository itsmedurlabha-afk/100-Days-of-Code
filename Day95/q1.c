#include <stdio.h>
#include <string.h>

// Structure to store student details
typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

// Function to find and return the top student
Student getTopStudent(Student students[], int count) {
    Student top = students[0]; // Assume first student is top initially

    for (int i = 1; i < count; i++) {
        if (students[i].marks > top.marks) {
            top = students[i]; // Copy structure
        }
    }
    return top; // Return structure
}

int main() {
    int n;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    Student students[n]; // Variable-length array

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read string with spaces

        printf("Roll number: ");
        if (scanf("%d", &students[i].roll) != 1) {
            printf("Invalid roll number.\n");
            return 1;
        }

        printf("Marks: ");
        if (scanf("%f", &students[i].marks) != 1) {
            printf("Invalid marks.\n");
            return 1;
        }
    }

    // Get top student
    Student top = getTopStudent(students, n);

    // Display top student details
    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
