#include<stdio.h>
int main()
{
    int a,b,c;
   
    printf("Enter 1st side:");
    scanf("%d",&a);
    printf("Enter 2nd side:");
    scanf("%d",&a);
    printf("Enter 3rd side:");
    scanf("%d",&a);
    if (a<(b+c) && b<(a+c) && c<(b+a))
    {
        printf("they are sides of an triangle");
    }
    
    else{
        printf("they are not sides of an triangle");
    }

}