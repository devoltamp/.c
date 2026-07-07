/* circular queue */
#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int queue[MAX];
int f = -1, r = -1;


void insert(){

    int num;
    printf("enter data: ");
    scanf("%d", &num);

    /* full */
    if (f == 0 && r == MAX-1){
        puts("full");
    }
    /* empty */
    else if (f == -1 && r == -1){
        f = r = 0;
        queue[r] = num;
    }
    /* empty upfront */
    else if (f != 0 && r == MAX-1){
        r = 0;
        queue[r] = num;
    }
    /* empty at last */
    else{
        r++;
        queue[r] = num;
    }
}

int del(){

    int val;
    /* empty */
    if (f == -1 && r == -1){
        puts("empty");
        return -1;
    }
    val = queue[f];
    if (f == r){
        f = r = -1;     /* as if it was empty */
    }
    else{
        if (f = MAX-1){
            f = 0;
        }
        else{
            f++;
        }
    }
    return val;
}

int peek(){

    /* empty */
    if (f == -1 && r == -1){
        puts("empty");
        return -1;
    }
    else{
        printf("%d\n", queue[f]);
    }
}

void display(){

    /* empty */
    if (f == -1 && r == -1){
        puts("empty");
    }
    else{
        int i;
        if (f < r){
            for (i = f; i <= r; i++){
                printf("%d ", queue[i]);
            }
        }
        else{
            for (i = f; i < MAX; i++){
                printf("%d ", queue[i]);
            }
            for (i = 0; i <= r; i++){
                printf("%d ", queue[i]);
            }
        }
        // while (i < MAX){
        //     printf("%d ", queue[i++]);
        // }
    }
}


int main(){

    insert();
    peek();
    del();
    display();
    return 0;
}
