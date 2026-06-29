/* somehow i directly jumped to the cll
instead of the ll */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
    int data;
    struct node *next;
};

struct node *start = NULL;

struct node *create_ll(struct node *start){

    struct node *new_node, *ptr;
    int num;
    puts("enter -1 to end");
    puts("enter data: ");
    scanf("%d", &num);

    while(num != -1){
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;

        if(start == NULL){
            new_node->next = NULL;
            start = new_node;
        }
        else{
            ptr = start;
            while(ptr->next != NULL){
                ptr = ptr->next;    /* making it the current location */
            }
            ptr->next = new_node;
            new_node->next = NULL;
        }
        printf("enter another data: ");
        scanf("%d", &num);
    }
    return start;
}
/* i just wanna add
-- that start holds the data.1 and the next pointer to the new node
& after that it's taken care by the new_node and the new_node pointer -- if you think
it it's pretty cool */

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
