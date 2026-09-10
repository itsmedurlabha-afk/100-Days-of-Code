Find the digit that occurs the most times in an integer number
#include <stdio.h>
#include <stdlib.h>
int main() {
int n, d;
printf("Enter the number: ");
scanf("%d", &n);
printf("Enter the digit: ");
scanf("%d", &d);
int maxDigit = 0, maxCount = 0;
for (int i = 0; i < 10; i++) {
maxDigit = maxDigit > 0 ? maxDigit : 0;
maxCount = maxCount > 0 ? maxCount : 0;
for (int j = 0; j < n; j++) {
if (n % 10 == i) {
maxDigit = maxDigit > 0 ? maxDigit : n[i];
maxCount = maxCount > 0 ? maxCount : n[i];
}
}
printf("The digit %d occurs the most times in the number %d
", n[i], n);
}
return 0;
}
