#include<stdio.h>
int main()
{
    int y,m,d;
    printf("Enter the number of days:");
    scanf("%d",&d);
    y=d/365;
    m=d/30;
    printf("years:months:days::%d:%d:%d",y,m,d);
    return 0;
}