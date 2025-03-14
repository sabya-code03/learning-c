#include<stdio.h>
int main(){
    int x;
    printf("Enter the Year:");
    scanf("%d",&x);
    if (x%4 ==0)
    {
        printf("This is a Leap Year");
    }
    else{
        printf("This is not a Leap Year");
    }
    return 0;
}