#include<stdio.h>

int main()
{
    int a[5],i,n,e;
    printf("Enter the elements of the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position to be updated:");
    scanf("%d",&e);
    printf("Enter the value to update:");
    scanf("%d",&n);
    i=e-1;
    a[i]=n;
    printf("The updated array:");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}