#include<stdio.h>

int main()
{
    int n,r,sum=0,x;
    printf("Enter a number:");
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        r=n%10;
        sum+=r*r*r;
        n=n/10;
    }
    if(sum==x)
    printf("%d is an armstrong's number",x);
    else
    printf("%d is not an armstrong's number",x);
    return 0;
}