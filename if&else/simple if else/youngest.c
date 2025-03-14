#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Age of Ram:");
    scanf("%d",&a);
    printf("Enter Age of Shyam:");
    scanf("%d",&b);
    printf("Enter Age of sabya:");
    scanf("%d",&c);
    if (a<b && a<c)
    {
        printf("Ram is the youngest");
    }
    if (b<c && b<a)
    {
        printf(" shyam is the youngest");
    }
    if (c<b && c<a){
        printf("Sabya is the youngest");
    }
    
}