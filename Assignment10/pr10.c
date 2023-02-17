#include<stdio.h>

int main()
{
    int a[100][100],i,j,r,c,r1,r2,k;
    printf("Enter number of rows and matrix:");
    scanf("%d%d",&r,&c);
    printf("Enter elements of the matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the rows to be swapped:");
    scanf("%d%d",&r1,&r2);
    for(j=0;j<c;j++)
    {
        k=a[r1-1][j];
        a[r1-1][j]=a[r2-1][j];
        a[r2-1][j]=k;
    }
    printf("The matrix after updation:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
