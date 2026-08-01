#include <stdio.h>
#include <stdlib.h>

/* for external var. it's fine */
int x = 10;
int *g(void){
    printf("%p", &x);
    return (&x);
}

int *p(void){
    int *px;
    px = (int *)malloc(sizeof(int));
    *px = 11;
    printf("%d ", *px);
    return (px);
}

int *m(void){
    int *px;
    px = (int *)malloc(sizeof(int));
    *px = 10;
    printf("%d", *px);
    return (px);
}

int main(){

    g();
    p();
    m();
    return 0;
}
