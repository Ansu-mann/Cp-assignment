#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i;
    printf("Enter the string:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    printf("The length of the string is %d",i);
    return 0;
}