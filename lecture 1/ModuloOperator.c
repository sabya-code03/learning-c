#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter 1st No.");
    scanf("%d", &a);
    printf("Enter 2nd No.");
    scanf("%d", &b);
    int r = a % b;
    printf("The Remainder when %d is divided by %d is : %d", a, b, r);
    return 0;
}