#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *start = NULL;

/* creating one ll */



int main(){

    return 0;
}

/*
start          ptr (initially)
 |              |
 v              v
[10|addrB] -> [20|addrC] -> [30|NULL]
 A             B             C

--> this is really important to know
instead of
ptr->next pointing to addrB
now the ptr points to addrB

read this thing like 5 times to understand
*/
