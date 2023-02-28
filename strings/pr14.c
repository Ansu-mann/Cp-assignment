#include<stdio.h>

int main()
{
    char a[100];
    int i,j,l,flag=1;
    printf("Enter the string:");
    scanf("%s",a);
    for(l=0;a[l]!='\0';l++);
    for(i=0,j=l-1;i<l;i++,j--)
    {
        if(a[i]!=a[j])
        {
            flag=0;
        }
    }
    if(flag==0)
    printf("%s is not a palindrome",a);
    else
    printf("%s is a palindrome",a);
    return 0;
}