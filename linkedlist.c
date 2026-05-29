/* self referential -- struct
-- a pointer is always 8 bytes but not one bit */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
} node;

/* always gotta check the recursive pointer is null or what
-- once the variable is assigned to the struct no need to write the whole thinge */
void printlist(node *head){

    node *current = head;
    while (current != NULL){
        printf("[%d] -> ", current->data);
        current = current->next;
        /* move to the next linked list */
    }
    printf("NULL\n");
}

int main(){

    node *head = (node *) malloc(sizeof(node));
    node *second = (node *) malloc(sizeof(node));
    node *third = (node *) malloc(sizeof(node));

    /* assigning the data */
    head->data = 10;
    head->next = second;    /* head points to second */

    second->data = 20;
    second->next = third;   /* second points to the third */

    third->data = 30;
    third->next = NULL;     /* third is the dead end */

    printf("linked structure content: \n");
    printlist(head);

    /* don't forget to clean zat memory */
    free(head);
    free(second);
    free(third);
    return 0;
}
