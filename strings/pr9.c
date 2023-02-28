#include<stdio.h>

int main()
{
    char a[100];
    int i;
    printf("Enter a string:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>96)&&(a[i]<129))
        {
            a[i]-=32;
        }
    }
    printf("The string in upper case:%s",a);
    return 0;
}