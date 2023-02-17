#include<stdio.h>
int main()
{
    int a,b,add,sub;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    printf("sum=%d\ndifference=%d\n",add,sub);
    return 0;
}