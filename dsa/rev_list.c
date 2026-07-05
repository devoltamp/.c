/* reverse list via stack
-- by the one liner code */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 10

int stk[MAX];
int top = -1;

/* i liked the one liner */
void push(int val){
    stk[++top] = val;   /* 0 */
}
int pop(){
    return(stk[top--]); /* from the last */
}

int main(){

    int val, n, i = 0;
    int arr[MAX];
    system("cls");

    while (i < MAX){
        printf("enter data: ");
        scanf("%d", &arr[i]);
        push(arr[i]);
        i++;
    }
    puts("reversed array: ");
    /* don't use the same var. */
    int j = 0;
    while (j < MAX){
        val = pop();
        arr[j] = val;
        printf("%d", arr[j]);
        j++;
    }

    return 0;
}
