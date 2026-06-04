/* copy input to output */

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

int main(){

    char buf[BUFSIZ];
    int n;

    /* 0 --> i/p, 1 & 2 --> o/p */
    while ((n = read(0, buf, BUFSIZ)) > 0){
        write(1, buf, n);
    }
    return 0;
}


/* these codes are UNIX based
so in windows additional thing called
WSL is required -- it'll let you use the ubuntu based terminal
which is kinda like the UNIX - file based one
otherwise these codes will not work */
