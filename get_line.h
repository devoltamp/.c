/* i don't know why but system's getline is givimg me trouble -- a lot */
#include <stdio.h>

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
