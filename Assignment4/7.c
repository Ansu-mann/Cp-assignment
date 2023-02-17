#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("The size of the variable x is %d",sizeof(x));
    printf("\nThe size of the integer datatype is %d",sizeof(int));
    printf("\nThe size of the character datatype is %d",sizeof(char));
    printf("\nThe size of the float datatype is %d",sizeof(float));
    return 0;
}