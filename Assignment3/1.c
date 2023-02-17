#include<stdio.h>
int main()
{
    float inch,cm;
    printf("Enter the distance (in inch): ");
    scanf("%f",&inch);
    cm=2.54*inch;
    printf("The distance(in cm): %f",cm);
    return 0;
}