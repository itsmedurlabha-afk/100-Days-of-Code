Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
int main() {
char str, *p; [^1^]
printf("Enter a string: ");
fgets(str, 80, stdin);
if (p=strchr(str, '
')) *p = '\0';
printf("longWordLength(): %d
", longWordLength(str));
return 0;
}
