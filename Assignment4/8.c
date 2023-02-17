#include<stdio.h>
int main()
{
    int x,y,a,b,c,d,e,f;
    printf("Enter the value of x and y:");
    scanf("%d",&x,&y);
    a=x&y;
    b=x|y;
    c=~x;
    d=~y;
    e=x<<y;
    f=x>>y;
    printf("Bitwise operations are: \n%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
    return 0;
}