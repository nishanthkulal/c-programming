#include <stdio.h>
void main()
{
    int y[4]={6,7,8,9};
    int *ptr = y+2;
    printf("%d\n",*ptr);
    printf("%d\n",0[ptr]);
    printf("%d\n",ptr[1]);
}