#include <stdio.h>
#include <stdlib.h>
#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];        // all 0
static char *allocp = &allocbuf[0];     // 0

void hola(void){

    int i = 0;
    while (i < ALLOCSIZE){
        printf("%d", allocbuf[i]);
        i++;
    }
}

char *alloc(int n){

    printf("%d\n", allocbuf + ALLOCSIZE - allocp);
    if (allocbuf + ALLOCSIZE - allocp >= n){    // 10000
        allocp += n;                            /* make an addition in n */
        return allocp - n;                      /* return the old p */
    }
    else
        return 0;
}

/* free storage pointed to >> buy p */
void afree(char *p){
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}

int main(){

    int n = 100;
    char *p;
    char name = "dev";

    p = &name;

    printf("%d\n", *allocp);
    // hola();
    alloc(n);   // 0 cause the last know position was also 0
    afree(p);
    return 0;

}
