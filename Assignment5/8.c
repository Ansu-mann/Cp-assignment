#include<stdio.h>

int main()
{
    int x;
    printf("Enter the year:");
    scanf("%d",&x);
    if (x%400==0)
    printf("Its a leap year");
    else
    printf("Its not a leap year");
    return 0;
}