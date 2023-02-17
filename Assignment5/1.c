#include<stdio.h>

int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if (x>0)
    printf("%d is positive",x);
    else
    printf("%d is negative",x);
    return 0;
}