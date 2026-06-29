/*
start          ptr (initially)
 |              |
 v              v
[10|addrB] -> [20|addrC] -> [30|NULL]
 A             B             C

--> this is really important to know
instead of
ptr->next pointing to addrB
now the ptr points to addrB

read this thing like 5 times to understand
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *start = NULL;

/* creating one ll */
struct node *create_ll(struct node *start){

    struct node *new_node, *ptr;
    int num;
    puts("enter -1 to end");
    printf("enter the data: ");
    scanf("%d", &num);

    while(num != -1){

        /* if will only load one time */
        if (start == NULL){
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node->prev = NULL;
            new_node->data = num;
            new_node->next = NULL;
            start = new_node;

            /* think of this as text not go much as struct
            meaning that start = new_node
            meaning that newly created node is pointed by the start */
        }
        else{

            ptr = start;
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node->data = num;
            /* the end part but gradually */
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = new_node;       /* as a next block */
            new_node->prev = ptr;
            new_node->next = NULL;
        }
        printf("enter another data: ");
        scanf("%d", &num);
    }
    return start;
}

struct node *display(struct node *start){

    struct node *ptr;
    ptr = start;
    while(ptr != NULL){

        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return start;
}

/* apn -- as per name */
struct node *insert_beg(struct node *start){

    struct node *new_node;
    int num;
    printf("enter the data: ");
    scanf("%d", &num);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    start->prev = new_node;
    new_node->next = start;
    new_node->prev = NULL;

    start = new_node;
    return start;
    /* new_node will be the start point
    each line has it's own value here */
}

struct node *insert_end(struct node *start){

    struct node *new_node, *ptr;
    int num;
    printf("enter the data: ");
    scanf("%d", &num);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    /* i forgot to add the ->next it would not print */
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = new_node;
    new_node->prev = ptr;
    new_node->next = NULL;
    return start;
}

int main(){

    start = create_ll(start);
    start = insert_beg(start);
    start = insert_end(start);
    start = display(start);

    return 0;
}
