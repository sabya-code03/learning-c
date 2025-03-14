#include<stdio.h>
int main()
{int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    if(n%5 == 0){
        if(n%3== 0){
            printf("THe number is divisible by 5 and 3");
        }
        else{
            printf("The number is divisible by 5 but not 3 ");
        }
        
    }
    else{
        printf("The number is divisible by neither 5 nor 3");
    }
       
    return 0;
}
