Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
int main() {
char input_date; [^1^]
char output_date; [^1^]
char day, year; [^2^] [^3^]
// Example input: "09/04/2025"
printf("Enter date in dd/04/yyyy format: ");
scanf("%s", input_date);
strncpy(day, input_date, 2);
day = '\0'; [^4^]
strncpy(year, input_date + 6, 4);
year = '\0'; [^5^]
// Construct output in dd-Apr-yyyy format
sprintf(output_date, "%s-Apr-%s", day, year);
printf("Formatted date: %s
", output_date);
return 0;
}
