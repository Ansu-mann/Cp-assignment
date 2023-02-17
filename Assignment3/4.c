#include<stdio.h>
int main()
{
    float x,y,z;
    printf("Before swapping the values of x, y, z:");
    scanf("%f%f%f",&x,&y,&z);
    z=x+y+z;
    y=z-x-y;
    x=z-x-y;
    z=z-x-y;
    printf("After swapping the value of x:%f\nAfter swapping the value of y:%f\nAfter swapping the value of z:%f\n",x,y,z);
    return 0;
}