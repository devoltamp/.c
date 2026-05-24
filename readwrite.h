#include <stdio.h>
#define MAXLEN 1000     /* max len of that line */

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
