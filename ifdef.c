#include <stdio.h>

#define DEBUG 1

int main(){

    #ifdef DEBUG
        printf("you crazy!\n");
    #endif

    #ifndef PI // checks the name is defined or what
    #define PI 3.14
    #endif
    printf("%f", PI);




    return 0;
}
