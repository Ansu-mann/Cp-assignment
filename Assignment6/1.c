#include<stdio.h>

int main()
{
    char x;
    printf("Enter x:");
    scanf("%c",&x);
    switch (x)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("%c is a vowel",x);
        break;
        default:
        printf("%c is a consonent",x);
    }
    return 0;
}