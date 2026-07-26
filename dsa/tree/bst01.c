/* right IN (the LNR) threaded bst

--- def'n ---
*root -- could be anything that it could point to
*rt -- IN order traversal ptr
*ptr -- as a newnode to be assigned

at starting all of them would be NULL
--> there's a lot going on in this code
--> right child will be known as right thread
--> thread as a flag (0 or 1)
for the linking and all i've got a photo -- so check that out */
#include <stdio.h>
#include <stdlib.h>

typedef struct tree{
    int val;
    struct tree *l;
    struct tree *r;
    int thread;
} tree;
tree *root = NULL;

/* insert */
tree *insert(tree *root, tree *ptr, tree *rt){

    /* base case */
    /* in the first case it's true */
    if (root == NULL){
        root = ptr;
        if (rt != NULL){
            root->r = rt;       /* so the right will point to the IN order next node */
            root->thread = 1;   /* & making the flag as 1 */
        }
    }

    /* traversing LEFT
    new val being less than the root val.
    -- that's why to the left it goes */
    else if (ptr->val < root->val){
        root->l = insert(root->l, ptr, root);
    }

    /* traversing RIGHT */
    else{
        if (root->thread == 1){
            root->r = insert(NULL, ptr, rt);        /* NULL will directly trigger the -- base case */
            root->thread = 0;
        }
        /* it'll go into the else loop anyways */
        else{
            root->r = insert(root->r, ptr, rt);     /* normal case above there's no rt to point -- that's just crazy */
        }
    }
    return root;
}

/* creating a threaded bst */
tree *threaded_tree(){

    tree *ptr;      /* aka nn */
    int num;
    puts("enter -1 to end");
    printf("enter the elements: ");
    scanf("%d", &num);
    while (num != -1){
        ptr = (tree *)malloc(sizeof(tree));
        ptr->val = num;
        ptr->l = NULL;
        ptr->r = NULL;
        ptr->thread = 0;

        /* root -- where we wanna add, ptr -- what we wanna add
        & rt -- where it points to
        -- that's just clever */
        root = insert(root, ptr, NULL);
        printf("enter the next element: ");
        fflush(stdin);
        scanf("%d", &num);
    }
    return root;
}

int main(){
    return 0;
}
