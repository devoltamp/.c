/* stack represented as linear array */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 3

int st[MAX];
int top = -1;

void push(int st[], int val){

    /* overflow */
    if (top = MAX - 1){
        puts("OVERFLOW");
    }
    else{
        top++;
        st[top] = val;
    }
}

int pop(int st[]){

    int val;
    /* underflow */
    if (top == -1){
        puts("UNDERFLOW");
    }
    else{
        val = st[top];
        top--;
        return val;
    }
}

/* cause it returns the val. */
int peek(int st[]){

    if (top == -1){
        puts("UNDERFLOW");
        puts("aka. empty");
        return -1;
    }
    else{
        return (st[top]);
    }
}

void display(int st[]){

    int i;
    if (top == -1){
        puts("stack is empty");
    }
    else{

        /* not similar */
        while(i < MAX){
            printf("%d\n", st[i]);
            i++;
        }
        /* correct one */
        /* array -ve indexing */
        for (i = top; i >= 0; i--){
            printf("%d\n", st[i]);
        }
    }
}

int main(int argc, char *argv[]){

    // push(st, 0);
    peek(st);
    // display(st);
    return 0;
}
