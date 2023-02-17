#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(;n!=0;)
    {
        i=n%10;
        sum+=i;
        n=n/10;
    }
    printf("The sum of the digits of the number:%d",sum);
    return 0;
}