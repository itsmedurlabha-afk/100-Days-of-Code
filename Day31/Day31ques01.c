Search for an element in an array using linear search.

  #include <stdio.h>
#include <string.h>
#define MAX 100 // Maximum number of strings
// Function to perform linear search
int linearSearch(char arr[][MAX], int n, char key[]) {
   for (int i = 0; i < n; i++) {
       if (strcmp(arr[i], key) == 0) { // Compare strings
           return i; // Return index if match is found
       }
   }
   return -1; // Return -1 if not found
}
int main() {
   int n;
   char arr[MAX][MAX], key[MAX];
   // Input number of strings
   printf("Enter the number of strings: ");
   scanf("%d", &n);
   // Input strings into the array
   printf("Enter %d strings:\n", n);
   for (int i = 0; i < n; i++) {
       scanf("%s", arr[i]);
   }
   // Input the string to search
   printf("Enter the string to search: ");
   scanf("%s", key);
   // Perform linear search
   int result = linearSearch(arr, n, key);
   // Output result
   if (result != -1) {
       printf("String '%s' found at index %d.\n", key, result);
   } else {
       printf("String '%s' not found in the array.\n", key);
   }
   return 0;
}
