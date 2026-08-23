Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
 #include <stdio.h>

int main() {
    int days;
    int fine;
    char choice;

    // Start a loop to check multiple books
    do {
        fine = 0; // Reset fine for each calculation

        printf("\n--- Library Fine Calculator ---\n");
        printf("Enter the number of late days: ");
        scanf("%d", &days);

        // Check rules and calculate fine
        if (days <= 0) {
            printf("Result: Book returned on time. No fine!\n");
        } 
        else if (days <= 5) {
            fine = days * 2;
            printf("Result: ₹%d fine (₹2 per day).\n", fine);
        } 
        else if (days <= 10) {
            fine = (5 * 2) + ((days - 5) * 4);
            printf("Result: ₹%d fine (₹2/day for first 5 days + ₹4/day for remaining days).\n", fine);
        } 
        else if (days <= 30) {
            fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
            printf("Result: ₹%d fine (₹2/day for first 5 days + ₹4/day for next 5 days + ₹6/day for remaining days).\n", fine);
        } 
        else {
            printf("Result: Membership Cancelled! (More than 30 days late).\n");
        }

        // Ask user if they want to calculate again
        printf("\nDo you want to calculate another fine? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for using the library system!\n");
    return 0;
}
