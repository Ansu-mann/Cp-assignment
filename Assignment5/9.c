#include<stdio.h>

int main()
{
    int a,b,c,d,e,avg,tmark=500,tot,per;
    printf("Enter the marks secured in the 5 subjects:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    tot=a+b+c+d+e;
    avg=tot/5;
    per=(tot*100)/tmark;
    printf("The average marks:%d\n",avg);
    if(per>=60)
    printf("First division");
    else if((per>=50)&&(per<60))
    printf("Second division");
    else if((per>=40)&&(per<50))
    printf("Third division");
    else if(per<40)
    printf("FAILED");
    return 0;
}