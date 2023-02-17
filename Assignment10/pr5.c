#include<stdio.h>

int main()
{
    int a[100][100],i,j,sum=0,r,c;
    printf("Enter the rows and columns:");
    scanf("%d%d",&r,&c);
    if(r!=c)
    printf("No left main leading diagonal");
    else
    {
        printf("Enter elements of the  matrix:");
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
                    if(i==j)
                    sum+=a[i][j];
                }
            }
        printf("The sum of the left main diagonal elements is %d",sum);
    }
    return 0;
}