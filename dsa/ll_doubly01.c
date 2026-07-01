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


int main(){

    start = create_ll(start);
    start = insert_beg(start);
    start = display(start);

    return 0;
}
