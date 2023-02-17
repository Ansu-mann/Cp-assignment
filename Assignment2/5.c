#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the value of F:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("C=%f\n",c);
    return 0;
}