#include<stdio.h>

int main()
{
    int a[5],i;
    printf("Enter the elements of the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if((a[i]%2!=0)&&(a[i]>0))
        printf("%d is an odd and positive element\n",a[i]);
        else if((a[i]%2!=0)&&(a[i]<0))
        printf("%d is odd and negative element\n",a[i]);
        else if((a[i]%2==0)&&(a[i]>0))
        printf("%d is even and positive element\n",a[i]);
        else if((a[i]%2==0)&&(a[i]<0))
        printf("%d is even and negative element\n",a[i]);
    }
    return 0;
}