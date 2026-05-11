#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main(){

    int i;
    srand(time(NULL)); // o'clock everytime

    for (i = 0; i<MAX; i++)
        printf("%ld ", (rand() % 200) + 1);
    printf("\n");

    return 0;
}
