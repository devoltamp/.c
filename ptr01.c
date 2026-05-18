#include <stdio.h>

int main(){

    int a = 5;
    int *p = NULL;

    p = &a;
    printf("a = %d\n", a);
    printf("add. a = %x\n", &a);
    printf("p = %x\n", p);
    printf("*p = %d\n", *p);
    printf("&p = %x\n", &p);

    /* %x for hexadecimal,
    always 5 quantities to deal with
    a = *p
    &a = p
    &p will be diff.
    */

    return 0;

}
