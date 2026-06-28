/* the mass suicide game
-- that N people in the circle commits mass suicide
and killing the Mth person around the circle
& we gotta find the order */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
    int key;
    struct node *next;
};

int main(){

    int i, N, M;
    struct node *t, *x;
    puts("N: ");
    scanf("%d", &N);
    puts("M: ");
    scanf("%d", &M);

    t = (struct node *)malloc(sizeof *t);
    t->key = 1;
    x = t;
    // t->next = NULL;

    for (i = 2; i <=N; i++){
        t->next = (struct node *)malloc(sizeof *t);
        /* the present t->next will be the next t->next */
        t = t->next;
        t->key = i;
        // printf("%d\t%p", t->key, t->next);
    }
    t->next = x;
    while(t != t->next){
        for(i = 1; i<M; i++){
            t = t->next;
        }
        printf("%d ", t->next->key);
        x = t->next;
        t->next = t->next->next;
        free(x);
    }
    printf("%d\n", t->key);
    return 0;
}
