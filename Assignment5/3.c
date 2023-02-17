#include<stdio.h>

int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if ((x%11==0)&&(x%13==0))
    printf("%d is divisible by both 11 and 13",x);
    else
    printf("%d is not divisible by both 11 and 13",x);
    return 0;
}