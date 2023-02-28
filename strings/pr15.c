#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],c;
    int i,l;
    printf("Enter the string:");
    scanf("%s",a);
    printf("Enter the character:");
    scanf("%c",&c);
    for(l=0;a[l]!='\0';l++);
    for(i=0;i<l;i++)
    {
        if(a[i]==c)
        {
            printf("%c is present in the string %s",c,a);
        }
        else
        printf("%c is not present in the string %s",c,a);
        break;
    }
    return 0;
}