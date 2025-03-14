#include<stdio.h>
int main() {
    // By using the ternary operator, we can summarize the code in just one line
    // Syntax: exp1 ? exp2 : exp3
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n); // Use &n to pass the address of n
    n % 2 == 0 ? printf("Even Number\n") : printf("Odd Number\n");
    return 0;
}
