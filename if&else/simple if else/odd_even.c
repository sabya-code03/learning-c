#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("Even Number");
    }
    // if (x % 2 != 0)
    // {
    //     printf("Odd Number");
    // }

    // if we give if two times than computer has to check the code twise ,
    // so this problem can be sloved by else input

    else
    {
        printf("Odd Number");
    }
    return 0;
}
