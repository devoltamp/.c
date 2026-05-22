#include <stdio.h>
#include <stdlib.h>
#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];        // all 0
static char *allocp = &allocbuf[0];     // 0

char *all_oc(int n){

    printf("%d\n", allocbuf + ALLOCSIZE - allocp);
    if (allocbuf + ALLOCSIZE - allocp >= n){    // 10000
        allocp += n;                            /* make an addition in n */
        return allocp - n;                      /* return the old p */
    }
    else
        return 0;
}
