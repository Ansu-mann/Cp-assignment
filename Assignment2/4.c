#include<stdio.h>
int main()
{
    float r,area,circum;
    printf("Enter the value of r:");
    scanf("%f",&r);
    area=3.14*r*r;
    circum=2*3.14*r;
    printf("area=%f\ncircumference=%f\n",area,circum);
    return 0;
}