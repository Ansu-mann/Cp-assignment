#include<stdio.h>

int main()
{
    int a[5],b[5],c[5],i;
    printf("Enter the elements of the array a:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of the array b:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("The array a:");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\nThe array b:");
    for(i=0;i<5;i++)
    {
        printf("\t%d",b[i]);
    }
    for(i=0;i<5;i++)
    {
        c[i]=a[i]*b[i];
    }
    printf("\nThe array c:");
    for(i=0;i<5;i++)
    {
        printf("\t%d",c[i]);
    }
    return 0;
}