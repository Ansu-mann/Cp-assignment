#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area,m;
    printf("Enter the value of a, b, c :");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    m=(s*(s-a)*(s-b)*(s-c));
    area=sqrt(m);
    printf("The area of the triangle is:%f",area);
    return 0;
}