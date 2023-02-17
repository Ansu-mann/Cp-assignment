#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x1,x2,D,rd;
    printf("Enter the values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    rd=pow(D,1/2);
    x1=(-b+rd)/2*a;
    x2=(-b-rd)/2*a;
    if((a==0)&&(b==0))
    printf("No Solution\n");
    else if(a==0)
    printf("Only one root\n");
    else if(D<0)
    printf("No real root\n");
    else
    printf("The real roots are:%d %d\n",x1,x2);
    return 0;
}