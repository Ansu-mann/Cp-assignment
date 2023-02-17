#include<stdio.h>

int main()
{
    int a[100][100],b[100][100],p[100][100],r,c,x,y,i,j;
    printf("Enter the rows and columns of matrix a:");
    scanf("%d%d",&r,&c);
    printf("Enter elements of matrix a:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix a:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the rows and columns of matrix b:");
    scanf("%d%d",&x,&y);
    printf("Enter elements of matrix b:");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The matrix b:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    if((r==x)&&(c==y))
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                p[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("addition of matrix a and b:\n");
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                printf("\t%d",p[i][j]);
            }
            printf("\n");
        } 
    }
    else
    printf("Addition of matrices can't be done");
    return 0;
}