/* -- a hell of a lot easier to understand
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef int Length;
typedef struct tnode *Treeptr;      /* the whole thing struct tnode * --> is returned via Treeptr */
typedef int (*PFI)(char *, char*);  /* the ptr to f'n that returns int */
/* PFI strcmp; -- redeclaration sucks */

typedef struct tnode{

    char *word;
    int count;
    Treeptr left;
    Treeptr Right;
} Treenode;
/* Treenode is the being the declaration part -- cool */

Treeptr talloc(void){
    return (Treeptr) malloc(sizeof(Treenode));
}

int main(){

    Length len = 5;
    printf("%d\n", len);

    char s1[] = "dev";
    char s2[] = "dev";
    len = strcmp(s1, s2);
    printf("%d\n", len);

    return 0;
}
