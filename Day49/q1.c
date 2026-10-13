Print the initials of a name.
#include <stdio.h>
int main() {
char name; [^1^]
printf("Enter your name: ");
gets(name); // This is the equivalent of `scanf("%[\^
]s", name);` in newer versions of C.
printf("The initials of the name is: ");
for(i = 0; i < strlen(name); i++) {
if(name[i] == ' ') {
printf("%c", name[i + 1]);
}
}
return 0;
}
