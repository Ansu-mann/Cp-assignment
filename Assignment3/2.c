#include<stdio.h>
int main()
{
    float basic,DA,HRA,gross;
    printf("Enter the basic salary of the employee:");
    scanf("%f",&basic);
    DA=0.6*basic;
    HRA=0.15*basic;
    gross=basic+HRA+DA;
    printf("The gross salary of the employee:%f",gross);
    return 0;
}