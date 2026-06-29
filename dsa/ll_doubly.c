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


int main(){

    start = create_ll(start);
    start = display(start);

    return 0;
}
