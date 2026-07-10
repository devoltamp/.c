#include <stdio.h>
#include <stdlib.h>

/* same as any queue */
typedef struct node{
    int data;
    int priority;
    struct node *next;
} node;

node *start = NULL;
void display(node *);

/* insert */
node *insert(node *start){

    int val, pri;
    node *ptr, *p;      /* the rous structs */

    ptr = (node *)malloc(sizeof(node));
    printf("val: ");
    scanf("%d", &val);
    printf("priority: ");
    scanf("%d", &pri);
    ptr->data = val;
    ptr->priority = pri;

    /* only exe. once */
    if (start == NULL || pri < start->priority){
        ptr->next = start;
        start = ptr;    /* main line cause this assigns all the val to the start */
    }
    else{
        p = start;
        while (p->next != NULL && p->next->priority <= pri){
            p = p->next;
        }
        ptr->next = p->next;
        p->next = ptr;
        /* quite subtle part */
    }
}

/* del. will only del. the first one
-- so that's easy */
node *del(node *start){

    node *ptr;
    if (start == NULL){
        puts("empty");
    }
    else{
        ptr = start;
        start = start->next;
        free(ptr);
    }
    return start;
}

void display(node *start){

    node *ptr;
    ptr = start;
    if (start == NULL){
        puts("empty");
        /* return does not work
        the way it suppose to */
    }
    else{
        puts("priority queue: ");
        while(ptr != NULL){
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main(){

    start = insert(start);
    start = insert(start);
    display(start);
    return 0;
}
