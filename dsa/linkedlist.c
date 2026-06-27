/* each para. will be -- stuct node *start
 *
 *
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


/* a f'n returning struct having para.
as the struct start */
struct node *create_cll(struct node *start){

    struct node *new_node, *ptr;
    int num;

    puts("enter -1 to end");
    puts("enter the data: ");
    scanf("%d", &num);

    while(num != -1){

        /* allocation */
        new_node = (struct node *)(malloc(sizeof(struct node)));
        new_node->data = num;
        if (start == NULL){
            new_node->next = new_node;
            start = new_node;   /* as there's nothing else to start with */
        }

        /* not completely sure about the else part */
        else{
            ptr = start;    /* both str. */
            while(ptr->next != start){
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = start;
        }

        printf("enter another data: ");
        scanf("%d", &num);
    }
    return start;
}

/* display the o/p */
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

    start = create_cll(start);
    start = display(start);
    /*
    printf("\n%d", start->data);
    printf("\n%xu", start->next);
    */
    return 0;
}
