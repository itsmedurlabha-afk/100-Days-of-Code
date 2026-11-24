#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_STUDENTS 100
#define FILE_NAME "students.txt"

// Structure to store student details
typedef struct {
    char name[MAX_NAME_LEN];
    int roll;
    float marks;
} Student;

int main() {
    Student students[MAX_STUDENTS];
    int n;

    // Step 1: Input number of students
    printf("Enter number of students (max %d): ", MAX_STUDENTS);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_STUDENTS) {
        printf("Invalid number of students.\n");
        return 1;
    }

    // Step 2: Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read full name with spaces

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

    // Step 3: Write to file using fprintf()
    FILE *fp = fopen(FILE_NAME, "w");
    if (!fp) {
        perror("Error opening file for writing");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    fclose(fp);
    printf("\nStudent records saved to '%s'.\n", FILE_NAME);

    // Step 4: Read from file using fscanf()
    fp = fopen(FILE_NAME, "r");
    if (!fp) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("\nReading student records from file:\n");
    Student temp;
    int count = 0;
    while (fscanf(fp, "%49s %d %f", temp.name, &temp.roll, &temp.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", temp.name, temp.roll, temp.marks);
        count++;
    }

    if (count == 0) {
        printf("No records found in file.\n");
    }

    fclose(fp);
    return 0;
}
