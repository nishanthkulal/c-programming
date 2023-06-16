#include<stdio.h>

void main()
{
    register int  sum=0,i;
    for(i=0;i<=5;i++)
    {
    sum=sum+i;
    printf("%d",sum);
    }
}