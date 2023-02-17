#include<stdio.h>
int main()
{
    float P,R,T,si,A;
    printf("Enter the value of principal:");
    scanf("%f",&P);
    printf("Enter the value of rate of interest:");
    scanf("%f",&R);
    printf("Enter the value of Time period(in years):");
    scanf("%f",&T);
    si=(P*R*T)/100;
    A=P+si;
    printf("The simple interest: %f\n",si);
    printf("The final amount to be paid: %f",A);
    return 0;
}