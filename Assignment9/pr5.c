#include<stdio.h>

int main()
{
    int a[5],i,s,s2;
    printf("Enter the elements of the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    s=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]<s)
        {
            s=a[i];
        }
    }
    s2=a[1];
    for(i=0;i<5;i++)
    {
        if(a[i]>s&&a[i]<s2)
        {
            s2=a[i];
        }
    }
    printf("The second smallest element of the array:%d",s2);
    return 0;
}