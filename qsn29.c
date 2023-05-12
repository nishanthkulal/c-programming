#include <stdio.h>
// #define square(x) x*x
#define square(x) (x)*(x)
void main()
{
    int a;
    a = square(2+3);
   // printf("%d",a);// ans = 11
   printf("%d",a); // ans = 25
   
}