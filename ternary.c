// getch & ungetch written with it
#include <stdio.h>

#define BUFSIZE 100

char buf[BUFSIZE]; // buffer for ungetch
int bufp = 0; // p being the free position in the buffer

int getch(void) {

    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c){

    if (bufp >= BUFSIZE)
        printf("too may arguments\n");
    else
        buf[bufp++] = c;
}

// noice!
