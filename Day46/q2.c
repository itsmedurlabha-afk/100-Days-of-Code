Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>
char findFirstRepeatingChar(const char *str) {
   int charCount[26] = {0}; // Array to store frequency of each character
   for (int i = 0; str[i] != '\0'; i++) {
       if (str[i] >= 'a' && str[i] <= 'z') { // Check for lowercase alphabets
           int index = str[i] - 'a';
           if (charCount[index] > 0) {
               return str[i]; // Return the first repeating character
           }
           charCount[index]++;
       }
   }
   return '\0'; // Return null character if no repeating character is found
}
int main() {
   char str[100];
   printf("Enter a string: ");
   scanf("%s", str);
   char result = findFirstRepeatingChar(str);
   if (result) {
       printf("The first repeating lowercase alphabet is: %c\n", result);
   } else {
       printf("No repeating lowercase alphabet found.\n");
   }
   return 0;
}
