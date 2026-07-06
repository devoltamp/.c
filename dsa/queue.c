/* linear queue
code has a lot of bugs */
#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int queue[MAX];
int front = -1, rear = -1;  /* means that there are no elemts to begin with */

void insert(){

    int num;
    printf("enter the data: ");
    scanf("%d", &num);

    /* problem was of the checker */
    if (rear == MAX - 1){
        puts("overflow");
        return;
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = num;
    }
    else{
        rear++;
        queue[rear] = num;
    }
}

void display(){

    int i = front;
    if (front == -1 || front > rear){
        puts("queue empty");
    }
    else{
        while (i <= rear){
            printf("%d ", queue[i]);
            i++;
        }
    }
}

/* this needs a little bit of work */
int check(void){
    if (front == -1 || front > rear){
        puts("underflow");
        return -1;
    }
}

int peek(){

    check();
    int temp = queue[front];
    printf("%d", temp);
}

int del_ele(){

    int val;
    check();
    val = queue[front];
    front++;
    if (front > rear){
        front = rear = -1;
        return val;
    }
}

int main(){

    system("cls");
    insert();
    // peek();
    del_ele();
    display();
    return 0;
}
