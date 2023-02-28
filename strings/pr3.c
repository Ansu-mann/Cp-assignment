#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i;
    printf("Enter the string:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    printf("The copied string:%s",b);
    return 0;
}