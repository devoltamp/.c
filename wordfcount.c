/* word frequency count */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "getch.c"
#include "getword.c"
#define MAXWORD 100


/* declarations */
// struct tnode *addpoint(struct tnode *, char *);
// void treeprint(struct tnode *);
// struct tnode *talloc(void);
// char *str_dup (char *);


/* the tree node -- main one */
struct tnode{
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
};


/* talloc: make a tnode */
struct tnode *talloc(void){
    return (struct tnode *) malloc(sizeof(struct tnode));
    /* here the () serves casting
    malloc returns void *
    so via a typecasting that could be assigned */
};


/* make a duplicate of s */
char *str_dup (char *s){

    char *p;
    p = (char *) malloc(strlen(s) + 1);

    /* if the malloc would return NULL --> that could lead to error
    & +1 for the \0 */
    if (p != NULL)
        strcpy(p, s);

    return p;
}

/* addtree: add a node with the word w, nearby the p */
struct tnode *addtree(struct tnode *p, char *w){

    int cond;

    if (p == NULL){
        p = talloc();           /* make a new node -- everytime */
        p->word = str_dup(w);    /* str_dup will take the w and copy it down to the p & will return it */
        p->count = 1;
        p->left = p->right = NULL;
    }
    else if ((cond = strcmp(w, p->word)) == 0){
        /* meaning the same word */
        p->count++;
    }

    /* less than into the left subtree
    & greater than into the right subtree */
    else if (cond < 0)
        p->left = addtree(p->left, w);
    else
        p->right = addtree(p->right, w);

    return p;
}

/* treeprint: in-order print of tree p */
void treeprint(struct tnode *p){

    if (p != NULL){
        treeprint(p->left);
        printf("%4d %s\n", p->count, p->word);
        treeprint(p->right);
        /* if you still haven't clicked most of the custom f'n and structure f'n are recursive -- type */
    }
}

int main(){

    /* here all will start with the root one
    and will expand based on it */

    struct tnode *root;
    root = NULL;
    char word[MAXWORD];

    while (getword(word, MAXWORD) != EOF){
        if (isalpha(word[0]))
            root = addtree(root, word);
    treeprint(root);
    }
    free(root);
    return 0;
}
/* here the EOF being the ctrl + z followed by an enter */
