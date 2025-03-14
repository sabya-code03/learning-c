#include<stdio.h>
int main(){
    int x;
    printf("The cost price is:");
    scanf("%d",&x);
    int y;
    printf("The selling price is:");
     scanf("%d",&y);
    
    if (x>y)
    {
       
        printf("Loss");
    }
    if (x<y)
    {
       
        printf("Profit");
    }
    else{
        printf("no profit or loss");
    }
    
    



}