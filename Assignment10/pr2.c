#include<stdio.h>

int main()
{
    int a[3][3],i,j,key;
    printf("Enter the elements of the matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the key element:");
    scanf("%d",&key);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==key)
            printf("The key element is %d present in %d,%d",a[i][j],i+1,j+1);
        }
    }
    return 0;
}