#include<stdio.h>

int main()
{
    int cn,units,price;
    printf("Enter the consumer number:");
    scanf("%d",&cn);
    printf("Enter the units consumed:");
    scanf("%d",&units);
    if(units<=200)
    price=units*1+100;
    else if ((units>200)&&(units<=300))
    price=200*1+(units-200)*2+100;
    else if (units>300)
    price=200*1+100*2+(units-300)*3+100;
    if (price>600)
    price=price+0.15*price;
    printf("The total bill for the consumer number %d is %d",cn,price);
    return 0;
}