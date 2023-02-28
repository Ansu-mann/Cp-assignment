//sum of digits of a number
#include<stdio.h>
int sum(int);
int main()
{
    int n,s;
    printf("Enter the number:");
    scanf("%d",&n);
    s=sum(n);
    printf("The sum of the digits of the number is:%d",s);
    return 0;
}
int sum(int n1){
    int s1;
    if(n1==0)
    return 0;
    else
    s1=n1%10+sum(n1/10);
    return s1;
}