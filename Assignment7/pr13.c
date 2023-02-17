#include<stdio.h>

int main()
{
    int l,u,i,j,flag;
    printf("enter the range:");
    scanf("%d%d",&l,&u);
    printf("prime numbers b/n %d and %d:",l,u);
    for(i=l;i<=u;i++){
        flag=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("%d\t",i);
    }
    return 0;
}