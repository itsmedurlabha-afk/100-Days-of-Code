Toggle case of each character in a string.
#include <stdio.h>
#include <string.h>
int main() {
char str; [^1^]
printf("Enter a string: ");
gets(str);
printf("String before toggling case: %s", str);
str = toggleCase(str);
printf("String after toggling case: %s", str);
return 0;
}
