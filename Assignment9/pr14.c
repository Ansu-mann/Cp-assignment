#include<stdio.h>

int main()
{
    int a[5],b[5],c[10],i,j,m;
    printf("Enter the elements of array a:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of array b:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Array a:");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\nArray b:");
    for(i=0;i<5;i++)
    {
        printf("\t%d",b[i]);
    }
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            if(a[i+1]<a[i])
            {
                m=a[i];
                a[i]=a[i+1];
                a[i+1]=m;
            }
        }
    }
    printf("\nSorted array a:");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            if(b[i+1]<b[i])
            {
                m=b[i];
                b[i]=b[i+1];
                b[i+1]=m;
            }
        }
    }
    printf("\nSorted array b:");
    for(i=0;i<5;i++)
    {
        printf("\t%d",b[i]);
    }
    for(i=0;i<5;i++)
    {
        c[i]=a[i];
    }
    for(i=5;i<10;i++)
    {
        c[i]=b[i-5];
    }
    printf("\nArray c:");
    for(i=0;i<10;i++)
    {
        printf("\t%d",c[i]);
    }
    for(j=0;j<10;j++)
    {
        for(i=0;i<10;i++)
        {
            if(c[i+1]<c[i])
            {
                m=c[i+1];
                c[i+1]=c[i];
                c[i]=m;
            }
        }
    }
    printf("\nSorted array c:");
    for(i=0;i<10;i++)
    {
        printf("\t%d",c[i]);
    }
    return 0;
}