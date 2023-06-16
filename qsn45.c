#include<stdio.h>
#define LOGIC(a,b) (a==b)
void main()
{
    if(LOGIC(5,6))
    {
        printf("same");
    }else
    {
        printf("different");
    }
}