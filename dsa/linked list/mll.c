/* as a part of mll
the polynomial is created as a ll
-- it's interesting */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
    int num;    /* power */
    int coeff;
    struct node *next;
};

struct node *start = NULL;
struct node *start1, *start2, *start3, *start4 = NULL;
struct node *last3 = NULL;

/* creating the poly. */
struct node *create(struct node *start){

    struct node *nn, *ptr;
    int n, c;
    printf("enter the power: ");
    scanf("%d", &n);
    printf("enter the coeff: ");
    scanf("%d", &c);

    while (n != -1){

        /* meaning literal start */
        if (start == NULL){

            nn = (struct node *)malloc(sizeof(struct node));
            nn->num = n;
            nn->coeff = c;
            nn->next = NULL;
            start = nn;
        }
        else{

            /* still the nn is at the start */
            ptr = start;
            while (ptr->next != NULL){
                ptr = ptr->next;
            }

            nn = (struct node *)malloc(sizeof(struct node));
            nn->num = n;
            nn->coeff = c;
            nn->next = NULL;
            ptr->next = nn;
        }
        printf("enter the power: ");
        scanf("%d", &n);
        if (n == -1)
            break;
        printf("enter the coeff: ");
        scanf("%d", &c);
    }
    return start;
}

struct node *display(struct node *start){

    struct node *ptr;
    ptr = start;
    while(ptr != start){
        printf("%d x %d", ptr->num, ptr->coeff);
        ptr = ptr->next;
    }
    return start;
}

int main(){

    start = create(start);
    start = display(start);

    return 0;
}
