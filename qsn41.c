#include<stdio.h>
#define LINE 0
void main()
{
    // #ifdef LINE
    // printf("First line");
    // #else
    // printf("second line");
    // #endif

    //  #ifndef LINE
    // printf("First line");
    // #else
    // printf("second line");
    // #endif

     #if LINE
    printf("First line");
    #else
    printf("second line");
    #endif
}