#include<stdio.h>

int main()
{
    char a[100],b[100];
    int i,flag=1;
    printf("Enter first string:");
    scanf("%s",a);
    printf("Enter second string:");
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            flag=0;
        }
    }
    if(flag==0)
    printf("The strings are not equal");
    else
    printf("The strings are equal");
    return 0;
}