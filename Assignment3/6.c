#include<stdio.h>
int main()
{
    float vol,rad;
    printf("Enter the value of radius:");
    scanf("%f",&rad);
    vol=1.3333*3.14*rad*rad*rad;
    printf("The volume of the sphere:%f",vol);
    return 0;
}