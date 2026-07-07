/* all starts with null
these locals
if pointer does not point to anything it'll return -1
ptr->next = -1
start = 0
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* custom data type */
struct node{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *insert(struct node *start){

    struct node *new_node;
    struct node *ptr = NULL;
    int num;
    puts("enter the data: ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    ptr = (struct node *)malloc(sizeof(struct node *));

    new_node->data = num;
    // struct node *ptr = NULL;
    while(ptr->next != start){
        ptr = ptr->next;
    }
    ptr->next = new_node;   /* the sturct */
    new_node->next = start; /* 0 */
    start = new_node;

    return start;
}

struct node *display(struct node *start){

    struct node *ptr;   /* ptr is not overlapped with the original one */
    ptr = start;
    while(ptr->next != start){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d ", ptr->data);   /* print the last element */
    return start;
}

int main(){

    start = insert(start);
    start = display(start);
    return 0;
}
