//power of a number
#include<stdio.h>
int power(int,int);
int main()
{
    int n,p,r;
    printf("Enter the number and its power:");
    scanf("%d%d",&n,&p);
    r=power(n,p);
    printf("The %dth power of %d is %d",p,n,r);
    return 0;
}
int power(int n1,int p1){
    int r1;
    if(p1==0)
    return 1;
    else
    r1=n1*power(n1,p1-1);
    return r1;
}