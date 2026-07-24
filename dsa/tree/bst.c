#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *l;
    struct node *r;
} node;
node *tree;

void create(node *tree){
    tree = NULL;
}

node *insert(node *tree, int val){

    node *ptr, *nodeptr, *parentptr;
    /* root */
    ptr = (node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->l,
    ptr->r = NULL;
    if (ptr == NULL){
        tree = ptr;
    }
    else{
        /* changing of node happens */
        parentptr = NULL;
        nodeptr = tree;
        while (nodeptr != NULL){
            parentptr = nodeptr;
            if (val < nodeptr->data)
                nodeptr = nodeptr->l;
            else
                nodeptr = nodeptr->r;
        }
        if (val < parentptr->data)
            parentptr->l = ptr;
        else
            parentptr->r = ptr;
    }
    return tree;
}
