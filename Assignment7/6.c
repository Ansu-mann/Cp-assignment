#include<stdio.h>

int main()
{
    float n,i,sum=0;
    printf("Enter n:");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i/(2*i-1);
    }
    printf("The sum of %f terms of the given series:%f",n,sum);
    return 0;
}