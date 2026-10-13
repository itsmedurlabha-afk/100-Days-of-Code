Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int main() {
char str1, str2; [^1^]
printf("Enter first string: ");
gets(str1);
printf("Enter second string: ");
gets(str2);
if (strstr(str1, str2) != NULL) {
printf("Strings are rotations of each other");
} else {
printf("Strings are not rotations of each other");
}
return 0;
}
