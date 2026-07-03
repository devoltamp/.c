/* header linked list
pretty similar but start now points to head */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
    int data;
    struct node *next;
};
struct node *start = NULL;

struct node *create(struct node *start){

    struct node *nn, *ptr;
    int num;
    printf("enter -1 to end\n");
    printf("enter data: ");
    scanf("%d", &num);

    while (num != -1){
        nn = (struct node *)malloc(sizeof(struct node));
        nn->data = num;
        nn->next = NULL;

        if (start == NULL){
            start = (struct node *)malloc(sizeof(struct node));
            start->next = nn;
            /* aka the nn is the start/header one */
        }
        else{
            ptr = start;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = nn;
            /* again nn is the start one here
            for the first time only */
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

    start = create(start);
    start = display(start);

    return 0;
}
