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

/* del. element
with child being 0, 1, 2 */
node *del(node *tree, int val){

    node *parent, *child, *suc, *psuc, *ptr;
    if (tree->l == NULL){
        puts("empty tree");
        return (tree);
    }

    parent = tree;
    child = tree->l;

    /* searching for the node
    10 != null 10 != 11
    -- inhereting the positions */
    while (child != NULL && val != child->data){
        parent = child;
        if (val < child->data)
            child = child->l;
        else
            child = child->r;
    }

    if (child == NULL){
        puts("the val is not there in the tree");
        return (tree);
    }

    /* 2 child */
    if (child->l != NULL && child->r != NULL){
        psuc = child;
        suc = child->r;

        /* the far most left possible */
        while (suc->l != NULL){
            psuc = suc;
            suc = suc->l;
        }

        /* getting the data */
        child->data = suc->data;

        /* targets redirected */
        child = suc;
        parent = psuc;
    }

    /* 0 or 1 child */
    if (child->l == NULL)
        ptr = child->r;
    else
        ptr = child->l;

    /* relinking the parent to child */
    if (parent->l == child)
        parent->l = ptr;
    else
        parent->r = ptr;

    free(child);
    return tree;
}

/* that +1 plays a very critical role there
tree represents the generalized ptr
    10
    /\
   5 15
*/
int total_node(node *tree){
    if (tree == NULL){
        return 0;
    }
    else{
        return (total_node(tree->l) + total_node(tree->r) + 1);
    }
}

int external_nodes(node *tree){
    if (tree == NULL){
        return 0;
    }
    else if ((tree->l == NULL) && (tree->r == NULL)){
        return 1;
    }
    else{
        return (external_nodes(tree->l) + external_nodes(tree->r));
    }
}

int internal_nodes(node *tree){
    if ((tree == NULL) || (tree->l == NULL) && (tree->r == NULL)){
        return 0;
    }
    /* if wrote sepe. there would be
    two ifs -- that's just breh */
    else{
        return (internal_nodes(tree->l) + internal_nodes(tree->r) + 1);
    }
    /* +1 for the root */
}

int height(node *tree){
    int leftheight, rightheight;
    if (tree == NULL){
        return 0;
    }
    else{
        leftheight = height(tree->l);
        rightheight = height(tree->r);
        if (leftheight > rightheight)
            return (leftheight + 1);
        else
            return (rightheight + 1);
    }
}

/* recursive part executes the whole f'n */
node *mirror(node *tree){
    node *ptr;
    if (tree != NULL){
        mirror(tree->l);
        mirror(tree->r);

        /* the swap */
        ptr = tree->l;
        ptr->l = ptr->r;
        tree->r = ptr;  /* where, ptr = tree->l */
    }
}

node *deltree(node *tree){
    /* it's if not while -- there's a difference */
    if (tree != NULL){
        deltree(tree->l);
        deltree(tree->r);
        free(tree);
    }
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
