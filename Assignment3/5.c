#include<stdio.h>
int main()
{
    float vol,rad,h;
    printf("Enter the value of radius and height:");
    scanf("%f%f",&rad,&h);
    vol=3.14*rad*rad*h;
    printf("The volume of the cylinder is:%f",vol);
    return 0;
}