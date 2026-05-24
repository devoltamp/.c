/* more like it the linesort.c code */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "get_line.h"
#include "readwrite.h"

#define MAXLINES 5000   /* of the lines */
#define MAXLEN 1000     /* max len of that line */


static char *argv[][2] = {"hello there", "general kernobi"};

char *lineptr[MAXLINES];
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

/* pointer to a f'n */
void _qsort(void *lineptr[], int left, int right, int (*comp)(void *, void *));
int numcmp(char *, char *);

/* ----------------------------------------- */
/* void *v[] --> the values could be anything int, char */


void _qsort(void *v[], int left, int right, int (*comp)(void *, void *)){

    int i, last;
    void swap(void *v[], int, int);     /* it's declared so it can be wrote anywhere */

    if (left >= right)
        return;
    swap(v, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right; i++){
        if ((*comp)(v[i], v[left]) < 0)
            swap(v, ++last, i);
    }
    swap(v, left, last);
    _qsort(v, left, last - 1, comp);
    _qsort(v, last + 1, right, comp);
    /* if you haven't noticed yet but the (*comp)(void *, void *)
    --> does not actually have anything in it */
}

int numcmp(char *s1, char *s2){

    double v1, v2;
    /* atof converts any string into double */
    v1 = atof(s1);
    v2 = atof(s2);
    if (v1 < v2)
        return -1;
    else if (v1 > v2)
        return 1;
    else
        return 0;
}

void swap(void *v[], int i, int j){

    void *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

/* --------------------------------- */
int main(int argc, char *argv[]){

    int nlines;
    int numeric = 0;    /* 1 if numeric sort -- needs to be checked */

    if (argc > 1 && strcmp(argv[1], "-n") == 0)
        numeric = 1;

    if ((nlines = readlines(lineptr, MAXLINES)) >= 0){
        // check out the this carefully
        // (void **) lineptr -- it's one single

        _qsort ((void **) lineptr, 0, nlines - 1, (int (*)(void *, void *)) {(numeric ? numcmp : strcmp)};
        writelines(lineptr, nlines);
        return 0;
    }
    else{
        printf("input too long man\n");
        return -1;
    }
}
