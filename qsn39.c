// #include <stdio.h>
// #define MAX(a,b) a>b?a:b
// void main()
// {
//     int c ;
//     c= MAX(5,6);
//     printf("%d",c);
// }

#include <stdio.h>
#define ABS(x) x>0?x:-x
void main()
{
    int c ;
    c= ABS(-8);
    printf("%d",c);
}