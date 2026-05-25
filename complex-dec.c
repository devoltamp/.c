/* () > * --> the precedence
anythign in the front is the return type


*/
#include <stdio.h>


/* normal one */
int _f(void){
    puts("hello there");
    return 0;
}


/* f'n to ptr */
void *f(void){
    printf("hello there\n");
}


int main(){
    f();

    /* ptr to f'n */
    int (*pf)(void) = _f;
    pf();

    return 0;
}
