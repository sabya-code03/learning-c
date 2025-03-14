#include <stdio.h>
int main()
{ /// it is better to use "else if " rather than "nasted if else" for betteer understanding
    int n;
    printf("Enter Persentage:");
    scanf("%d", &n);
    if (n > 80)
    {
        printf("A grade");
    }
    else
    {
        if (n > 60)
        {
            printf("B grade");
        }
        else
        {
            if (n > 40)
            {
                printf("C grade");
            }
            else
            {
                printf("D grade");
            }
        }
    }
    return 0;
}