#include<stdio.h>
void main()
{
int a=2,b=6,c=10,big;
/*big= (a>b?a:b)>c?(a>b?a:b):c;                it will take more memory and time to compile */
big=a>b?a:b>c?b:c; /*this use less time*/
printf("%d",big);
}

/* greatest among 4 */
