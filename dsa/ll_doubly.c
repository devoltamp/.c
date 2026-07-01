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

struct node *insert_before(struct node *start){

    struct node *ptr, *new_node;
    int num, val;
    printf("enter the data: ");
    scanf("%d", &num);
    printf("enter the value before you wanna add: ");
    scanf("%d", &val);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    while(ptr->data != val){
        ptr = ptr->next;
    }

    /* now comes the part */
    new_node->next = ptr;
    new_node->prev = ptr->prev;
    ptr->prev->next = new_node;
    ptr->prev = new_node;
    return start;
};

struct node *insert_after(struct node *start){

    struct node *ptr, *new_node;
    int num, val;
    printf("enter the data: ");
    scanf("%d", &num);
    printf("enter the val that you wanna add after: ");
    scanf("%d", &val);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    while(ptr->data != val){
        ptr = ptr->next;
    }
    new_node->prev = ptr;
    new_node->next = ptr->next;
    ptr->next->prev = new_node;     /* to replace the own value */
    ptr->next = ptr;
    return start;
}

struct node *delete_beg(struct node *start){

    /* in todays microc. lect. my prof. told me that
    it;s always right to left */
    start = start->next;
    start->prev = NULL;
    return start;
}

struct node *delete_end(struct node *start){

    struct node *ptr;
    ptr = start;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    // ptr = NULL;
    ptr->prev->next = NULL;     /* it's not directly written like that */
    free(ptr);
    return start;
}

/* gives the last element */
struct node *_delete_end(struct node *start){

    while(start->next != NULL){
        start = start->next;
    }
    start->prev->next = NULL;
    return start;
}

struct node *del_list(struct node *start){

    /*
    while(start == NULL){
        start = delete_beg(start);
        if(start == NULL){
            printf("you've reached the end");
        }
    }
    */
    while(start != NULL)
        start = delete_beg(start);
    return start;
}

int main(){

    start = create_ll(start);
    start = insert_beg(start);
    start = insert_end(start);
    start = insert_before(start);
    start = insert_after(start);
    start = delete_beg(start);
    start = delete_end(start);
    start = _delete_end(start);
    start = del_list(start);
    start = display(start);

    return 0;
}
/* comment accordingly to the test */
