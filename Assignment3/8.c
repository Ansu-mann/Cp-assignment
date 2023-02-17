#include<stdio.h>
#include<math.h>
int main()
{
    float P,T,R,n,A,F,ci;
    printf("Enter the value of principal:");
    scanf("%f",&P);
    printf("Enter the value of rate of interest:");
    scanf("%f",&R);
    printf("Enter the value of Time period(in years):");
    scanf("%f",&T);
    printf("Enter the value of n:");
    scanf("%f",&n);
    F=pow((1+R/n),n*T);
    A=P*F;
    ci=A-P;
    printf("The amount to be paid after the compound interest:%f\n",A);
    printf("compound interest:%f",ci);
    return 0;
}