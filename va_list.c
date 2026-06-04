#include <stdio.h>
#include <stdarg.h>


/* it'll be done for each -- as an arg */
void numprint(int count, ...){

    va_list args;
    va_start (args, count);

    for (int i = 0; i < count; i++){

        int num = va_arg(args, int);
        printf("arg %d: %d\n", i, num);
    }
    va_end(args);
}

int main(){

    numprint(3, 10, 20, 30);
    return 0;
}