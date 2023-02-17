#include<stdio.h>

int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if (x%7==0)
    printf("%d is divisible by 7",x);
    else
    printf("%d is not divisible by 7",x);
    return 0;
}