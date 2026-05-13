/* static = it stays after the exicution
but still can't be excessed */
#include <stdio.h>

// use of static
void f(void){

    static int i = 5;
    printf("i = %d \n", i);
    i++;
    /* other wise the output will change to
    i = 5 everytime a loop starts*/
}

int main(void){

    f();
    f();
    f();
    return 0;
}
