/*  sc = storage class
    register makes is darn fast
*/
#include <stdio.h>
#define LIMIT 1000

int main(void){

    register int i;
    for (i = 0; i<LIMIT; i++)
        printf("%8d", i);

    // not convinced
    int j = 0;
    for (j = 0; j<LIMIT; j++)
        printf("%8d", j);

    return 0;
}
