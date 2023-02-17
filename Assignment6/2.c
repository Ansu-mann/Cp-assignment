#include<stdio.h>

int main()
{
    int x,y;
    char a;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    printf("Enter the operator:");
    scanf(" %c",&a);
    switch(a)
    {
    case '+':
    printf("Sum of the given numbers is %d",x+y);
    break;
    case '-':
    printf("Difference of the numbers is %d",x-y);
    break;
    case '*':
    printf("Product of the numbers is %d",x*y);
    break;
    case '/':
    printf("Division of the numbers is %d",x/y);
    break;
    case '%':
    printf("remainder: %d",x%y);
    break;
    }
    return 0;
}