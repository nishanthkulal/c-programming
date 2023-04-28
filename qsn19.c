#include<stdio.h>
void main()
{
int a=5,e;
/*e=a++ + ++a;*/
e=a++ + a++ + a++ + a++;
printf("%d",e);
}
