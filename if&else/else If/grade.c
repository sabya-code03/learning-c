#include <stdio.h>
int main()
{
    int n;
    printf("Enter Persentage:");
    scanf("%d", &n);

    if (n > 80)
    {
        printf("A grade\n");
    }
    else if (n > 60) // its better to use else if rather than if beacause if we run "if" then it will run every program and will print every grade suppose if we give 65 it will print both A & B grade  , but for "else if " we can stop this
    {
        printf("B grade\n");
    }
    else if (n > 40)
    {
        printf("C grade\n");
    }
    else
    {
        printf("D grade");
    }
    return 0;
}