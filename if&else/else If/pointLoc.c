#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter the co-ordinates : ");
    scanf("%d %d", &x, &y);
    if (x== 0 && y == 0 )
    {
        printf(" The point is in the origin");
    }
    else if ( y == 0)
    {
        printf(" the point is on X axis");
    }
    else if ( x == 0)
    {
        printf(" the point is on Y axis");
    }
    else{
        printf(" the point not in any axis");
    }
    
    return 0;
}