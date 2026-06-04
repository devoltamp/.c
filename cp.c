/* f, v, vf, s, vs -- printf; all do different things */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <fcntl.h>
#include <sys/syscall.h>
#define PERMS 0666


/* custom error -- block */
void error(char *fmt, ...){

    va_list args;
    va_start(args, fmt);
    fprintf(stderr, "error: ");
    vfprintf(stderr, fmt, args);
    fprintf(stderr, "\n");
    va_end(args);

    exit(1);
}

int main(){

    /* i got bored so 
    not gonna do the error part */

}


