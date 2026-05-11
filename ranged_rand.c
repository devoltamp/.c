#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){

    int i;
    // no matter the o/p will be the same if the seed is not set
    for (i = 0; i<MAX; i++)
        printf("%ld ", rand());
        printf("\n");


    // to get it in the range
    for (i = 0; i<MAX; i++)
        printf("%ld ", (rand() % 100)+ 1);
    printf("\n");

    return 0;
}
