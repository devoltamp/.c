/* count the c word
structure is a type */

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


/* binsearch: find word in tab[0] .. tab[n-1] */
int binsearch(char *word, struct key tab[], int n){

    int cond;
    int low, mid, high;

    low = 0;
    high = n - 1;
    while (low <= high){
        mid = (low + high)/2;
        if ((cond = strcmp(word, tab[mid].word)) < 0)
            high = mid - 1;
        else if (cond > 0)
            low = mid + 1;
        else
            return mid;
    }
    return -1;
    /* error */
}

/* getword: get next word or character from the input */
int getword(char *word, int lim){

    int c;
    int getch(void);
    void ungetch(int);
    char *w = word;
    // w = &word;

    while (isspace(c = getch()))    // remove the whitespace
        ;
    if (c != EOF)
        *w++ = c;       // this will happen only for once`
    if (!isalpha(c)){
        *w = '\0';
        return c;
    }
    for ( ; --lim > 0; w++){
        *w = getch();
        if (!isalnum(*w)){
            ungetch(*w);
            break;
        }
    }
    *w = '\0';
    return word[0];
}


int main(){

    int n;
    char word[MAXWORD];

    while (getword(word, MAXWORD) != EOF)
        if (isalpha(word[0]))
            if ((n = binsearch(word, keytab, NKEYS)) >= 0)
                keytab[n].count++;
    for (n = 0; n < NKEYS; n++)
        if (keytab[n].count > 0)
            printf("%d %s\n", keytab[n].count, keytab[n].word);
    return 0;
}
