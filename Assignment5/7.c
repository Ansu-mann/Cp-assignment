#include<stdio.h>

int main()
{
    int x,a,b;
    printf("Enter a three digit number:");
    scanf("%d",&x);
    b=x;
    a=x%10;
    x=x/100;
    if (a==x)
    printf("%d is a palindrome",b);
    else
    printf("%d is not an palindrome",b);
    return 0;
}