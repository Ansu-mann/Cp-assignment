#include<stdio.h>

int main()
{
    int a[100][100],b[100][100],i,j,r,c,sum=0,avg;
    printf("Enter the rows and columns:");
    scanf("%d%d",&r,&c);
    if(r!=c)
    printf("No right anti-counter diagonal");
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
                    if(i+j==r-1)
                    sum+=a[i][j];
                }
            }
        avg=sum/r;
        printf("The average of the right anti-counter diagonal elements is %d",avg);
    }
    return 0;
}
