#include<stdio.h>
#define AB(x) x>0?x:-x

void main()
{
    int c;
    scanf("%d",&c);
    c=AB(c);
    printf("%d",c);
}