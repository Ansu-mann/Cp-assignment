#include<stdio.h>

int main()
{
    int a[3][2],b[2][3],i,j;
    printf("Enter elements of the matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("The transpose of the matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}