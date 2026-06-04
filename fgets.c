/* manual written -- fgets & fputs */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 101

char *_fgets(char *s, int n, FILE *iop){

    register int c;
    register char *cs;

    cs = s;     /* all into cs */
    while (--n > 0 && (c = getc(iop)) != EOF){
        if (*cs++ = c)
        /* s --> cs --> c (the char travelled like this) */
            break;
    }
    *cs = '\0';
    return (c == EOF) ? NULL : s;
    /* as per the code fgets return the char *s --> but filled one */
}

/* _fputs: puts the string s on the file iop */
int *_fputs(char *s, FILE *iop){

    int c;
    while (c = *s++){
        putc(c, iop);
    }

    if (ferror(iop))
        clearerr(iop);
        return EOF;
    return 0;
}

int _getline(char *line, int max){
    if (fgets(line, max, stdin) == NULL){
        /* aka s == NULL */
        return 0;
    }
    else
        return strlen(line);
}

int main(){

    FILE *iop = fopen("fgets.txt", "w");
    char *temp[MAX];
    _fgets(*temp, MAX, iop);
    _fputs(*temp, stdout);

    exit(0);
}

/* for char --> getc, putc
for string  --> fgets, fputs & also for the files (i see no difference) */
