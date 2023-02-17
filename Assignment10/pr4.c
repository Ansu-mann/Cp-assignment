#include<stdio.h>

int main()
{
    int a[100][100],b[100][100],i,j,r,c,flag=1;
    printf("Enter the rows and columns:");
    scanf("%d%d",&r,&c);
    if(r!=c)
    printf("Not a square matrix");
    else
    {
        printf("Enter the elements of the matrix:");
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
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                b[j][i]=a[i][j];
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]!=b[i][j])
                {
                    flag=0;
                }
            }
        }
        if(flag==0)
        printf("Its not symmetrical matrix");
        else
        printf("Its a symmetric matrix");
    }
    return 0;
}