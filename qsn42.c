#include<stdio.h>
#define LINE 0
void main()
 {
    #ifdef LINE
    #error Macro is available
    #else
    printf("Macro is not available ");
    #endif
}