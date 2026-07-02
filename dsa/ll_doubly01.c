/* circular doub.
by just simply shortening
the new_node to nn that lead to a whole new realization */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *start = NULL;

struct node *create_ll(struct node *start){

    struct node *nn, *ptr;
    int num;
    printf("enter -1 to end\n");
    printf("enter the data: ");
    scanf("%d", &num);

    while(num != -1){

        /* if only one time exicution */
        if (start == NULL){
            nn = (struct node *)malloc(sizeof(struct node));
            start = nn;
            nn->next = start;
            nn->prev = start;
            nn->data = num;
        }
        else{
            nn = (struct node *)malloc(sizeof(struct node));
            nn->data = num;
            ptr = start;        /* at the nn right now */
            /* ptr at the last */
            while(ptr->next != start){
                ptr = ptr->next;
            }

            nn->next = start;
            nn->prev = ptr;
            ptr->next = nn;
            start->prev = nn;
            ptr->next = start;
            /* the main thing that's why the circular dll */
        }
        printf("enter another data: ");
        scanf("%d", &num);
    }
}

struct node *display(struct node *start){

    struct node *ptr;
    ptr = start;

    do{
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    while(ptr != start);

    return start;
}


struct node *insert_beg(struct node *start){

    struct node *ptr, *nn;
    int num;
    printf("enter data: ");
    scanf("%d", &num);

    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = num;
    ptr = start;
    while(ptr->next != start){
        ptr = ptr->next;
    }

    ptr->next = nn;
    nn->prev = ptr;
    nn->next = start;
    start->prev = nn;
    start = nn;
    /* nn is the start -- that's all */

    return start;
}

struct node *insert_end(struct node *start){

    struct node *ptr, *nn;
    int num;
    printf("enter data: ");
    scanf("%d", &num);

    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = num;
    ptr = start;
    while(ptr->next != start){
        ptr = ptr->next;
    }

    /* with the diagram -- it's pretty straight forward */
    ptr->next = nn;
    nn->prev = ptr;
    nn->next = start;
    start->prev = nn;
    return start;
}

struct node *del_beg(struct node *start){

    struct node *ptr;
    ptr = start;
    while(ptr->next != start){
        ptr = ptr->next;
    }

    ptr->next = start->next;
    start->next->prev = ptr;
    /* here we can't write start->prev = null
    cause we haven't actually given out the start */

    free(start);
    start = ptr->next;
    return start;
}

struct node *del_end(struct node *start){

    struct node *ptr;
    ptr = start;
    while(ptr->next != start){
        ptr = ptr->next;
    }

    /* to remove the block */
    ptr->prev->next = start;
    start->prev = ptr->prev;
    free(ptr);
    return start;
}

struct node *del_list(struct node *start){

    struct node *ptr;
    ptr = start;
    while(ptr->next != start){
        start = del_end(start);
    }
    free(start);
    return start;
}

int main(){

    start = create_ll(start);
    start = insert_beg(start);
    start = display(start);
    /* others could be
    added just like these */

    return 0;
}
