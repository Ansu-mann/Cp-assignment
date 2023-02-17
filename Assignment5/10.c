#include<stdio.h>

int main()
{
    char x;
    printf("Enter the value of x:");
    scanf("%c",&x);
    if((x>='0')&&(x<='9'))
    printf("Its a digit\n");
    else if((x>='a')&&(x<='z'))
    printf("Its a lowercase alphabet\n");
    else if((x>='A')&&(x<='Z'))
    printf("Its a uppercase alphabet\n");
    else 
    printf("Its a special symbol\n");
    return 0;
}