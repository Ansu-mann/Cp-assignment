#include<stdio.h>

int main()
{
    int a[100][100],i,j,r,c;
    printf("Enter rows and columns:");
    scanf("%d%d",&r,&c);
    if(r!=c)
    printf("Not a square matrix:");
    else
    {
        printf("Enter elements of the matrix:");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("\t%d",a[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<r-1;i++)
        {
            for(j=1;j<c;j++)
            {
                if(i!=j)
                a[i][j]=0;
            }
        }
        printf("The new matrix:\n");
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