#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum+=pow(7,i);
    }
    printf("The sum of the series:%d",sum);
    return 0;
}