#include <stdio.h>

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
