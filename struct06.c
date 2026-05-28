/* some additional points to make -- via a pointer code
~ broken code */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "getch.c"
#define MAXWORD 100
#define NKEYS (sizeof keytab / sizeof keytab[0])


struct key{
    char *word;
    int count;
} keytab[] = {
    /* bins just find the word from here -- idk about the
    finding the c */
    {"auto", 0},
    {"break", 0},
    {"break", 0},
    {"case", 0},
    {"char", 0},
    {"const", 0},
    {"continue", 0},
    {"default", 0},
    {"unsigned", 0},
    {"void", 0},
    {"volatile", 0},
    {"while", 0},
};

/* binsearch written as bunch of ptrs */
struct key *
binsearch(char *word, struct key *tab, int n){

    int cond;
    struct key *low = &tab[0];
    struct key *high = &tab[n];
    struct key *mid;

    /*
    .
    .
    .
    */
}

int main(){

    int n;
    struct key *tab;
    printf("%d\n", &tab[0]);
    printf("%d\n", &tab[NKEYS]);
    printf("%d\n", &tab[NKEYS] - &tab[0]);
    printf("%d\n", NKEYS);

    return 0;
}
