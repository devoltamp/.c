/* linked rep. */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct stack{
    int data;
    struct stack *next;
};
struct stack *top = NULL;

/* push */
struct stack *push(struct stack *top, int val){

    struct stack *nn;
    nn = (struct stack *)malloc(sizeof(struct stack));
    nn->data = val;

    /* safety check */
    if (top == NULL){
        nn->next = NULL;
        top = nn;
    }
    else{
        /* now i can't unseen the fact that
        it's right to left assignment */
        nn->next = top;
        top = nn;
    }
    return top;
}


/* pop */
struct stack *pop(struct stack *top){

    struct stack *ptr;
    ptr = top;

    if (top == NULL){
        printf("empty stack");
    }
    else{
        top = top->next;
        free(ptr);
    }
    /* attached prog. from the push */
}
