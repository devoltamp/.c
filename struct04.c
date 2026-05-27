#include <stdio.h>
#include <stdlib.h>

struct {
    int len;
    char *str;
} *p;

int main(){

    p = malloc(sizeof(*p));
    if (p == NULL){
        // puts("allocation falied!");
        return 1;
    }

    /* assigning values is easy as a ptr to structure */
    p->len = 5;
    p->str = "hello there";

    printf("%d\n", p->len);
    printf("%s\n", p->str);

    free(p);
    return 0;
}
