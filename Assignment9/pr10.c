#include<stdio.h>

int main()
{
    int a[5],i,e,v;
    printf("Enter the elements of the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be updated:");
    scanf("%d",&e);
    printf("Enter the new value:");
    scanf("%d",&v);
    for(i=0;i<5;i++)
    {
        if(a[i]==e)
        a[i]=v;
    }
    printf("The updated array:");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}