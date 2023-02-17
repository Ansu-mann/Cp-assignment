#include<stdio.h>
int main()
{
    int m,cm,mm;
    printf("Enter the value of mm:");
    scanf("%d",&mm);
    m=mm/1000;
    cm=mm/10;
    printf("m:cm:mm::%d:%d:%d",m,cm,mm);
    return 0;
}