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
    ptr = malloc(sizeof(node));
    ptr->data = val;
    ptr->l = ptr->r = NULL;
    if (tree == NULL){
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

/* traversal */
/* pre -- root -> left -> right */
void pre(node *tree){

    if (tree != NULL){
        printf("%d  ", tree->data);
        pre(tree->l);    /* untill all the left ptr are not over it'll not move to the right one */
        pre(tree->r);
    }
}

/* in -- left -> root -> right */
void in(node *tree){

    if (tree != NULL){
        in(tree->l);
        printf("%d  ", tree->data);
        in(tree->r);
    }
}

/* post -- left -> right -> root */
void post(node *tree){

    if (tree != NULL){
        post(tree->l);
        post(tree->r);
        printf("%d  ", tree->data);
    }
}


node *smallest(node *tree){
    if ((tree == NULL) || (tree->l == NULL))
        return tree;
        /* cause there's no left root will be the smallest */
    else
        return smallest(tree->l);
}

node *largest(node *tree){
    if ((tree == NULL) || (tree->r == NULL))
        return tree;
    else
        return largest(tree->r);
        /* cause the left would have all the smallest */
}

int main(){

    tree = insert(tree, 10);
    tree = insert(tree, 20);
    tree = insert(tree, 30);
    pre(tree);
    printf("\n");
    in(tree);
    printf("\n");
    post(tree);
    return 0;
}
