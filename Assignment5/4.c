#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter the sides of the triangle:");
    scanf("%d%d%d",&x,&y,&z);
    if ((x+y>z)&&(y+z>x)&&(x+z>y))
    printf("It's a valid triangle");
    else
    printf("It's an invalid triangle");
    return 0;
}