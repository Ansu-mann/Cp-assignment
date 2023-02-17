#include<stdio.h>
int main()
{
    float a,b;
    printf("Before swapping the values of a and b:");
    scanf("%f%f",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping the value of a=%f\nAfter swapping the value of b=%f\n",a,b);
    return 0;
}