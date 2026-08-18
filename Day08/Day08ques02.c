Write a program to input three numbers and find the largest among them using if–else.
  #include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3) {
        printf("Largest number: %d\n", n1);
    } 
    else if (n2 >= n1 && n2 >= n3) {
        printf("Largest number: %d\n", n2);
    } 
    else {
        printf("Largest number: %d\n", n3);
    }

    return 0;
}
