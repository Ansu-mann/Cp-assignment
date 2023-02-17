#include<stdio.h>
int main()
{
    int h,m,s;
    printf("Enter the time(in sec):");
    scanf("%d",&s);
    h=s/3600;
    m=s/60;
    printf("hours:minutes:seconds::%d:%d:%d\n",h,m,s);
    return 0;
}