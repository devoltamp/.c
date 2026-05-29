/* main f'n is not written
hashtab -- it contains two main parts being
1. lookup(s)
2. install


--> idk if you have noticed or what but the things are getting a little heated - i would say a lot */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define HASHSIZE 101

/* pointer table -- aka hashtable */
static struct nlist *hashtab[HASHSIZE];

struct nlist{
    struct nlist *next;
    char *name;
    char *defn;
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

/* hash: creating a non-negative int small int value for the string s
-- unsigned just for that */
unsigned hash(char *s){

    unsigned hashval;   /* this only returns the value */
    for (hashval = 0; *s != '\0'; s++){
        hashval = *s + 32 * hashval;
    }
    return hashval % HASHSIZE;      /* & this returns the index */
}

/* lookup: look for s in hashtable */
struct nlist *lookup(char *s){

    struct nlist *np;
    for (np = hashtab[hash(s)]; np != NULL; np = np->next){
        if (strcmp(s, np->name) == 0){
            return np;
            /* found */
        }
    }
    return NULL;    /* not found */
}

/* install: putting the name & defn in the hashtable */
struct nlist *install(char *name, char *defn){

    struct nlist *np;
    unsigned hashval;


    /* for the not found */
    if ((np = lookup(name)) == NULL){
        np = (struct nlist *) malloc(sizeof(*np));
        if (np == NULL || (np->name = str_dup(name)) == NULL)
            return NULL;
        hashval = hash(name);
        np->next = hashtab[hashval];
        hashtab[hashval] = np;
    }
    else
        free((void *) np->defn);
        /* free up the previous defns */

    if ((np->defn = str_dup(defn)) == NULL)
        return NULL;

    return np;
}

int main(){
    return 0;
}

/* there is just no freaking way that they are gonna ask
this type of codes in the gate
-- it would simply take too much time to just simply decode this thing */
