#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Before swapping the values of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    a=a+b+c;
    b=a-b-c;
    c=a-b-c;
    a=a-b-c;
    printf("After swapping the values of a,b,c= %f %f %f",a,b,c);
    return 0;
}