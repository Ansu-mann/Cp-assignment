#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Before swapping the value of a and b:");
    scanf("%f%f",&a,&b);
    c=a;
    a=b;
    printf("After swapping the value of a=%f\nAfter swapping the value of b=%f\n",a,c);
    return 0;
}