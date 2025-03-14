#include<stdio.h>
int main()
{
    int a, b, c ;
    printf("Enter the age of Ram:");
    scanf("%d",&a);
    printf("Enter the age of Shyam:");
    scanf("%d",&b);
    printf("Enter the age of Ajay:");
    scanf("%d",&c);
    if(a>b){
if(b>c){ //a>b>c
printf("Ajay is the Youngest");
}
else{ // a>c>b
    printf("Shyam is the youngest");
}
    }
    else{ //b>a
if(a>c){ //b>a>c
printf("Ajay is the Youngest");
}
else{ // b>c>a
printf("Ram is the Youngest");
}
    }
    return 0;
}