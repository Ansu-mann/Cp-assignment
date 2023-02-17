#include<stdio.h>
int main()
{
    int a,x,y,z,sum;
    printf("Enter a three digit number:");
    scanf("%d",&a);
    x=a%10;
    a=a/10;
    y=a%10;
    a=a/10;
    z=a;
    sum=x+y+z;
    printf("The sum of the digits:%d\nThe digit at ones place:%d\nThe digit at tenth place:%d\nThe digit at hundredth place:%d\n",sum,x,y,z);
    return 0;
}