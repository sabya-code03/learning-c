#include<stdio.h>
int main()
{
int a;
if (3+2%5) //any expression wheater it is number or charecter it prints expect it is '0'   -->beacause "0" means false . --> other expressions are true 
{
    printf("It works\n");
}
if (5)
{
    printf("even It works\n");
}
if ('c')
{
    printf("even It also works");
}


    return 0;
}