#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 1st number:");
scanf("%d",&a);
printf("Enter 2nd number:");
scanf("%d",&b);
printf("Enter 3rd number:");
scanf("%d",&c);
if(a>b){ //b is out of race
if(c>a){//c is greater  --> c>a>b
    printf("%d is the greatest ",c); 
}
else{ // otherwise a will greater,b<c<a
    printf("%d is the greatest ",a);
}

}
else{// b>a ---> out of race 
    if(b>c){ //b>a>c
        printf("%d is the greatest ",b);
    }
    else{//c>b>a
        printf("%d is the greatest",c);
    }
     
}
return 0;
}

