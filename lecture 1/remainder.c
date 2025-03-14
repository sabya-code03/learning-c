#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter 1st No.");
    scanf("%d", &a);
    printf("Enter 2nd No.");
    scanf("%d", &b);
      int q = a/b;
      int r = a-(b*q) ;
      printf("The Remainder when %d is divided by %d is : %d",a,b,r);
    // int r = a % b; // this is the direct form to calculate remainder
    printf("The Remainder when %d is divided by %d is : %d", a, b, r);
    return 0;
}
