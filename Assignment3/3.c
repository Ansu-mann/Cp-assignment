#include<stdio.h>
int main()
{
    float x,y,z;
    printf("Enter the value of x, y, z :");
    scanf("%f%f%f",&x,&y,&z);
    x=x+y+z;
    y=x-y-z;
    z=x-y-z;
    x=x-y-z;
    printf("After swapping the value of x:%f\nAfter swapping the value of y:%f\nAfter swapping the value of z:%f\n",x,y,z);
    return 0;
}