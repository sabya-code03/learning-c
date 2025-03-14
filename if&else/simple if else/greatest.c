#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter the 1st Number:");
scanf("%d",&a);
printf("Enter the 2nd Number:");
scanf("%d",&b);
printf("Enter the 3rd Number:");
scanf("%d",&c);
printf("Enter the 4th Number:");
scanf("%d",&d);
if (a>b && a>c && a>d)
{
    printf("%d is the greatest",a);
}
if (a<b && b>c && b>d)
{
    printf("%d is the greatest",b);
}
if (c>b && a<c && c>d)
{
    printf("%d is the greatest",c);
}
if (d>b && d>c && a<d)
{
    printf("%d is the greatest",d);
}


    return 0;
}