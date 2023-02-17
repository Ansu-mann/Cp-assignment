#include<stdio.h>

int main()
{
    int a[5],i,e;
    printf("Enter the elements of the array a:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the index to be deleted:");
    scanf("%d",&e);
    for (i=e;i<5;i++)
    {
        a[i]=a[i+1];
    }
    printf("The new array:");
    for(i=0;i<4;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}