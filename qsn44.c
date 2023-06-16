#include<stdio.h>
// #define SQR(X) X*X
#define SQR(X) (X*X)
void main()
 {
   int i;
   i=27/SQR(3+2); //i= 27/3+2*3+2
                    //i= 27/(3+2*3+2)
   printf("%d",i);
}