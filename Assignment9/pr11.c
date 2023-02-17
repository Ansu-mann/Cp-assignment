#include<stdio.h>

int main()
{
    int a[5],i,n,e;
    printf("Enter the elements of the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be inserted:");
    scanf("%d",&n);
    printf("Enter the index to be inserted:");
    scanf("%d",&e);
    for(i=5;i>=e;i--)
    {
        a[i+1]=a[i];
    }    
    a[e]=n;
    printf("The bew array:");
    for(i=0;i<6;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}