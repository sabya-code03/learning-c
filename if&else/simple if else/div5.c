#include<stdio.h>
int main(){
    int x;
    printf("Enter a Number:");
    scanf("%d", &x);
    if (x%5 == 0)
    {
       printf("The Number Is Divisible to 5") ;
    }
    else{
        printf("The Number Is Not Divisible to 5");
    }
    
    return 0;
}