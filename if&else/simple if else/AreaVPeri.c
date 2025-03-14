#include<stdio.h>
int main(){
    int a;
    printf("The length is :");
    scanf("%d", &a);
    int b;
    printf("The breadth is :");
    scanf("%d", &b);
    int ar = a*b;
  int  pr = 2*(a+b);
    if (ar>pr)
    {
        /* code */
        printf("Area is greater than Perimeter");
    }
    
    if (ar<pr)
    {
        /* code */
        printf("Perimeter is greater than Area");
    }
   
    
    
    return 0;

}