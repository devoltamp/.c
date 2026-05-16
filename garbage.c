/* automatic and register can also have any expression in the
initial insteas=d of a constant.

*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int i;
static int j;

int main(){

    srand(time(NULL)); // everthing o'clock

    printf("%d\n", i);
    printf("%d\n", j);

    /* underfined values - wow */
    /* automatic and the register init */
    int k;
    register int l;

    printf("%d\n", k);
    printf("%d\n", l);

    return 0;

}
