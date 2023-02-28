#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j;
    printf("Enter the string a:");
    scanf("%s",a);
    printf("Enter the string b:");
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++);
    for(i,j=0;a[j]!='\0';i++,j++)
    {
        a[i]+=b[j];
    }
    printf("The string after concatention:%s",a);
    return 0;
}