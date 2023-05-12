#include<stdio.h>
#define a 10

void foo();
void main()
{
    printf("%d..",a);
    foo();
    printf("%d",a);

}
void foo()
{
    #undef a
    //printf("%d",a);
    #define a 50
}
