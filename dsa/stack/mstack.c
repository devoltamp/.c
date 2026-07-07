/* multiple stack */
#include <stdio.h>
#include <conio.h>

#define MAX 10
int stack[MAX];
int topA = -1, topB = MAX;

/* for A */
void pushA(){

    int val;
    int i = 0;

    while(i < MAX){
        printf("enter data: ");
        scanf("%d", &val);
        topA += 1;
        stack[topA] = val;
        i++;
    }
}

int popA(){

    if (topA == -1){
        puts("stack A is empty");
        return -1;
    }
    int val;
    val = stack[topA];
    topA--;     /* -2 */
    return val;
}

/* single element */
void _pushA(){

    int val;
    printf("enter data: ");
    scanf("%d", &val);
    topA++;
    stack[topA] = val;
}

/* for B */
/* at the last node */
void _pushB(){

    int val;
    printf("enter data: ");
    scanf("%d", &val);
    topB--;
    stack[topB] = val;
}

int popB(){
    int val;
    val = stack[topB];
    topB++;
    return val;
}

void display(){

    int j = 0;
    while(j < MAX){
        printf("%d \n", stack[j]);
        j++;
    }
}

int main(){

    pushA();
    _pushA();
    popA();

    _pushB();
    popB();
    display();
    return 0;
}

/* found this site;
https://www.cs.usfca.edu/~galles/visualization/StackLL.html */
