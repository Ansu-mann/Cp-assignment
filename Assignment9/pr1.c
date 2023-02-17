#include<stdio.h>

int main()
{
    int a[5],i;
    printf("Enter the elements of the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array:");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}