/* 67 C.E -- that's old */
#include <stdio.h>
#include <stdlib.h>

struct node{
    int id;
    struct node *next;
};
struct node *start, *ptr, *nn;

int main(){

    int n, k;
    int i, count;
    printf("#n of players: ");
    scanf("%d", &n);
    printf("enter the value of k: ");
    scanf("%d", &k);

    /* circular ll
    start will not change in any case */
    start = malloc(sizeof(struct node));
    start->id = 1;
    ptr = start;
    for (i = 2; i <= n; i++){
        nn = malloc(sizeof(struct node));
        ptr->next = nn;
        nn->id = i;
        nn->next = start;
        ptr = nn;
    }
    /* skipping & execution */
    for (count = n; count > 1; count--){
        for (i = 0; i < k-1; ++i){
            ptr = ptr->next;
        }
        ptr->next = ptr->next->next;    /* exe. part simply remove the link */
    }

    printf("winner: %d", ptr->id);
    return 0;
}
