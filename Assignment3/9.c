#include<stdio.h>
int main()
{
    float s,u,t,a;
    printf("Enter the value of u,t,a:");
    scanf("%f%f%f",&u,&t,&a);
    s=u*t+0.5*a*t*t;
    printf("The value of s:%f",s);
    return 0;
}