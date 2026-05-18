#include <stdio.h>

#define TEST 0

int main(void){

    /* the fancy way */
    #if TEST
        printf("passed\n");
    #else
        printf("failed\n");
    #endif

    /* the normal way */
    if (TEST){
        printf("passed\n");
    }
    else
        printf("failed\n");

    return 0;
}
