#include<stdio.h>
int main()
{
    float l,b,area,perimeter;
    printf("Enter the value of a and b:");
    scanf("%f%f",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("area=%f\nperimeter=%f\n",area,perimeter);
    return 0;
}