#include<stdio.h>

int main()
{
    int a[5],i,j,c;
    printf("Enter the elements of the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            if(a[j]<a[i])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    printf("The sorted array:");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}