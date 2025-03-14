#include<stdio.h>
int main()
{
int x = 3, y,z;
y=x=10; // value of x &y is 10 --> print 10
z= x<10; // this denotes boolean expresssion --> printr 0
printf("\n%d \n%d \n%d", x, y,z);
    return 0;
}