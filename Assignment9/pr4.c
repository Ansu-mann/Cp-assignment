#include<stdio.h>

int main()
{
    int a[5],i,l,s;
    printf("Enter the elements of the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    s=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
        }
        else if(a[i]<s)
        {
            s=a[i];
        }
    }
    printf("The largest and the smallest elements are %d and %d respectively",l,s);
    return 0;
}