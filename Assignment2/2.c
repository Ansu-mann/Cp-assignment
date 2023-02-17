#include<stdio.h>
int main()
{
    float a,b,sum,diff,product,quotient;
    printf("Enter the value of a and b:");
    scanf("%f%f",&a,&b);
    sum=a+b;
    diff=a-b;
    product=a*b;
    quotient=a/b;
    printf("sum=%f\ndiff=%f\nproduct=%f\nquotient=%f\n",sum,diff,product,quotient);
    return 0;
}