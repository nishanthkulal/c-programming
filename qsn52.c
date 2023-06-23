#include<stdio.h>
void main()
{
    int i=5;
    switch(i)
    {
        case 3 : printf("hello world");
        default:; //Error
        default:;
    }
}