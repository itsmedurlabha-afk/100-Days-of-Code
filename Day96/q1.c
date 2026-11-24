#include <stdio.h>
#include <string.h>

// Nested structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Structure for Employee with nested Date
struct Employee {
    int id;
    char name[50];
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    // Input Employee ID
    printf("Enter Employee ID: ");
    if (scanf("%d", &emp.id) != 1) {
        printf("Invalid input for ID.\n");
        return 1;
    }

    // Clear input buffer
    while (getchar() != '\n');

    // Input Employee Name
    printf("Enter Employee Name: ");
    if (fgets(emp.name, sizeof(emp.name), stdin) == NULL) {
        printf("Invalid input for name.\n");
        return 1;
    }
    // Remove newline character if present
    emp.name[strcspn(emp.name, "\n")] = '\0';

    // Input Joining Date
    printf("Enter Joining Date (DD MM YYYY): ");
    if (scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year) != 3) {
        printf("Invalid input for date.\n");
        return 1;
    }

    // Basic validation for date
    if (emp.joiningDate.day < 1 || emp.joiningDate.day > 31 ||
        emp.joiningDate.month < 1 || emp.joiningDate.month > 12 ||
        emp.joiningDate.year < 1900) {
        printf("Invalid date entered.\n");
        return 1;
    }

    // Display Employee Details
    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp.joiningDate.day,
           emp.joiningDate.month,
           emp.joiningDate.year);

    return 0;
}
