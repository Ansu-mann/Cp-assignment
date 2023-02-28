#include<stdio.h>

int main()
{
    char a[100];
    int i;
    printf("Enter a string:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>64)&&(a[i]<97))
        {
            a[i]+=32;
        }
    }
    printf("The string in lower case:%s",a);
    return 0;
}