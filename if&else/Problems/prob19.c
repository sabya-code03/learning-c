#include<stdio.h>
int main()
{
int x = 3;
float y = 3.0;
if (x ==y)
{
  printf("\nx and y are equal"); // altough they are different data type but their value are same so "if" will run
}
else{
    printf("\n x and y are not equal");
}

    return 0;
}