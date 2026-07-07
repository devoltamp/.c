/* linked list rep.
when the three -> comes things
gets a little heated
-- some problems may occur */
#include <stdio.h>
#include <stdlib.h>

struct queue{
    struct queue *front;
    struct queue *rear;
};
struct node{
    int data;
    struct node *next;
};

// struct queue *q = NULL;
struct queue *q;
void create(struct queue *q){
    q->front = q->rear = NULL;
}

/* insert */
struct queue *insert(struct queue *p, int val){

    int val;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d", &val);
    ptr->data = val;

    /* case - 1 */
    if (q->front == NULL){
        struct queue *q = ptr;
        q->front->next = NULL;
        q->front->rear = NULL;
    }
    /* case - 2 */
    else{
        q->rear->next = ptr;
        q->rear = ptr;
        /* last next points to nothing */
        q->rear->next = NULL;
    }
    return q;
}

struct queue *display(struct queue *q){

    struct node *ptr;
    ptr = q->front;

    if (ptr == NULL){
        puts("empty queue");
    }
    else{
        while (ptr != q->rear){
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);
    }
    return q;
}

int peek(struct queue *p){
    if (q->front == NULL){
        printf("empty");
    }
    else{
        printf("%d ", q->front->data);
    }
}

struct queue *del_ele(struct queue *q){

    struct node *ptr;
    ptr = q->front;

    if (q->front == NULL){
        purs("underflow");
    }
    else{
        q->front = q->front->next;
        free(ptr);
    }
}

int main(){

    q = insert(q, val);
    q = display(q);
    return 0;
}
