#include<stdio.h>

int main()
{
    int a[100][100],b[100][100],i,j,r,c;
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
                if((i==j)||(i+j==r-1))
                a[i][j]=0;
                else 
                a[i][j]=1;
            }
        }
        printf("The updated matrix:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("\t%d",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}