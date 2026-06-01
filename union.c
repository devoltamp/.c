// it took me whole two days to start --> my bad three days
#include <stdio.h>

union utag{

    int ival;
    float fval;
    char *sval;
} u;

/* unions: only be initialized by the first type that is written
cause the first usage case of union was int
can hold the largest value that you could think of
if its declared by a name then a dot .
or if it's a pointer then ->
*/

int main(){

    u.ival = 10;
    u.fval = 10;


    if (u == INT)
        printf("%d\n", u.ival);
    else if (u == FOAT)
        printf("%f\n", u.fval);
    else if (u == STRING)
        printf("%s\n", u.sval);
    else
        printf("get out!");

    return 0;
}
