#include<stdio.h>
#include<math.h>
int main()
{
    float x,f,c;
    printf("Enter the value of x:");
    scanf("%f",&x);
    f=floor(x);
    c=ceil(x);
    printf("The floor value:%f\nThe ceil value:%f\n",f,c);
    return 0;
}