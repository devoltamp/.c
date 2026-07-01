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
int main(){
    clrscr();
    return 0;
}

struct node *create_ll(struct node *start){

    struct node *nn, *ptr;
    int num;
    printf("enter -1 to end");
    printf("enter the data: ");
    scanf("%d", &num);

    while(num != -1){

        /* if only one time exicution */
        if (start == NULL){
            nn = (struct node *)malloc(sizeof(struct node));
            nn->prev = NULL;
            nn->data = num;
            nn->next = start;
            nn = start;
        }
        else{
            nn = (struct node *)malloc(sizeof(struct node));
            nn->data = num;
            ptr = start;        /* at the nn right now */
            while(ptr->next != start){
                ptr = ptr->next;
            }

            /* ptr at the last */
            nn->prev = ptr;
            ptr->next = nn;
            nn->next = start;
            start->prev = nn;
        }
        printf("enter another data: ");
        scanf("%d", &num);
    }
}
