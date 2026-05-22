/* sort the line alphabetically
--> array of pointers
this is the ultimate code that combines all the knowledge till */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "qsort.h"     /* added header file */
#include "alloc.h"
// #include "get_line.h"

#define MAXLINES 5000   /* max #n of lines */
#define MAXLEN 1000     /* max len of that line */

/* def'ns */

char *lineptr[MAXLINES];
// int get_line(char *, int);
char *all_oc(int);
int readlines(char *lineptr[], int maxlines);

/* gotta rewrite the get_line
if *line given as arguments
--> line[i] = c;
*/
int get_line(char *line, int maxlen){
    int c;
    int i;

    for (i = 0; i<maxlen - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        line[i] = c;
    }
    if (c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    /* making the last badboy zero */
    return i;   /* being the len */
}


/* readlines --> read input lines & return the nlines */
int readlines(char *lineptr[], int maxlines){

    int len;
    int nlines = 0;
    char *p;
    char line[MAXLEN];

    /* get_line --> read a line into s; return the length */
    while ((len = get_line(line, MAXLEN)) > 0){
        /* 0 >= suppose 500 --> it'll always go to false */
        if (nlines >= maxlines || (p = malloc(len)) == NULL)
            return -1;
        else{
            line[len-1] = '\0';     /* this'll delete new line */
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }
    return nlines;

    /* steps that happens
    len --> line[] is copies to p (pointer) --> p = alloc(len) --> lineptr[0]
    */
}

/* writelines --> write output lines */
void writelines(char *lineptr[], int nlines){

    /* nlines decrements
    while lineptr increases */
    while (nlines-- > 0){
        printf("%s\n", *lineptr++);
    }
}

/* qsort & swap is in qsort.h header file */
int main(){

    int nlines;
    printf("press cltr + z and then enter --> to exicute \n");
    printf("if output does not show up try pressing it multiple times\n");
    printf("enter enything: \n");
    if ((nlines = readlines(lineptr, MAXLINES)) >= 0){
        /* l = 0 and r = last index - 1 --> pretty cool */
        q_sort(lineptr, 0, nlines -1);
        writelines(lineptr, nlines);

        /* memory free */
        for (int i = 0; i < nlines; i++) {
            free(lineptr[i]);
        }
        return 0;
    }
    else{
        printf("error: i/p too big to sort\n");
        return 1;
        /* being the error */
    }
}
