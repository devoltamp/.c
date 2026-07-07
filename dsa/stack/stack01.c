/* linked rep. */
/* just lookout for the overflow,
underflow & the empty stacks */

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

/* display */
struct stack *display(struct stack *top){

    struct stack *ptr;
    ptr = top;
    if (top == NULL){
        puts("empty stack");
    }
    else{
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    return top;
}

/* peek */
int peek(struct stack *top){

    return top->data;
}

int main(){

    int val, option;
    do{
        puts("----- main menu -----");
        puts("1. push");
        puts("2. pop");
        puts("3. peek");
        puts("4. display");
        puts("5. exit");

        printf("enter #n: ");
        scanf("%d", &option);
        switch(option){

            case 1:
                puts("enter the #n to push: ");
                scanf("%d", &val);
                top = push(top, val);
                break;
            case 2:
                top = pop(top);
                break;
            case 3:
                val = peek(top);
                break;
            case 4:
                top = display(top);
                break;
        };
    }
    while (option != 5);

    return 0;
}
/* ptr is always the follow along */
