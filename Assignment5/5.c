#include<stdio.h>

int main()
{
    int a,b,c,d,x;
    printf("Enter the value of a,b,c,d:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (c==d)
    printf("Error404");
    else
    {
        x=(a-b)/(c-d);
        printf("The value of x is %d",x);
    }
    return 0;
}