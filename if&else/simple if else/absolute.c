#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d", &n);
    if(n<0)
    {
        n= n * (-1);
    }
    printf("The Absulute value is : %d",n);
    return 0;
}