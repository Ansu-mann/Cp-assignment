#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],k;
    int i,j,l;
    printf("Enter the string:");
    scanf("%s",a);
    for(l=0;a[l]!='\0';l++);
    for(i=0,j=l-1;i<l/2;i++,j--)
    {
        k=a[i];
        a[i]=a[j];
        a[j]=k;
    }
    printf("The reversed string:%s",a);
    return 0;
}