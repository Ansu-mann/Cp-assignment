#include<stdio.h>

int main()
{
    int a[5],key,i;
    printf("Enter the elements of the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key element:");
    scanf("%d",&key);
    for(i=0;i<5;i++)
    {
        if(a[i]==key)
        printf("The key element %d is in %dth position",a[i],i+1);
    }
    return 0;
}