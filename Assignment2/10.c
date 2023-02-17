#include<stdio.h>
int main()
{
    float b,h,area;
    printf("Enter the value of b and h:");
    scanf("%f%f",&b,&h);
    area=0.5*b*h;
    printf("The area of the triangle= %f",area);
    return 0;
}