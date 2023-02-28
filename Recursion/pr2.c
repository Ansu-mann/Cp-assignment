//factorial of a number
#include<stdio.h>
int fact(int);
int main()
{
    int n,f;
    printf("enter the number:");
    scanf("%d",&n);
    f=fact(n);
    printf("The factorial of the number:%d",f);
    return 0;
}
int fact(int n1){
    int f1;
    if(n1==0)
    return 1;
    else
    f1=n1*fact(n1-1);
    return f1;
}