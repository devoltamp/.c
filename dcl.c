/* dcl and dirdcl --> convert declaration to words */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXTOKEN 100

enum {NAME, PARENS, BRACKETS};

/* ~ declarations */
void dcl(void);
void dirdcl(void);



int gettoken(void);
int tokentype;              /* type of last token */
char token[MAXTOKEN];       /* last token string */
char name[MAXTOKEN];        /* identifier name */
char datatype[MAXTOKEN];    /* data type = char, int, etc */
char out[1000];             /* output string */

/* skips blanks and tabs --> and return the next token
token being --> any other single character
*/
int gettoken(void){

    int c;

    int getch(void);
    void ungetch(int);
    char *p = token;

    while ((c = getch()) == ' ' || c == '\t')
        ;

    /* for () */
    if (c == '('){
        if ((c = getch()) == ')'){
            strcpy(token, "()");
            return tokentype = PARENS;
        }
        else{
            ungetch(c);
            return tokentype = 'c';
        }
    }

    /* for [] */
    else if (c == '['){
        for (*p++ = c; (*p++ = getch()) != ']'; )
            ;
        *p = '\0';  /* setting the last to \0 */
        return tokentype = BRACKETS;
    }

    /* for name */
    else if (isalpha(c)){
        for (*p++ = c; isalnum(c = getch()); ){
            *p++ = c;
            /* makes it c */
        }
        *p = '\0';
        ungetch(c);
        return tokentype = NAME;
    }

    else{
        return tokentype = c;
    }
}


/* parse a declarator
the declared in the dcl */
void dcl(void){

    int ns; /* #n of * */

    for (ns = 0; gettoken() == '*';){
        ns++;
    }

    dirdcl();
    while (ns-- > 0){
        strcat(out, " pointer to");
    }
}

/* parse a direct declarator --> whichever is defined */
void dirdcl(void){

    int type;

    if (tokentype == '('){
        dcl();
        if (tokentype != ')')
            printf("error: missing )\n");
    }
    else if (tokentype == NAME)
        strcpy(name, token);
    else {
        printf("error: expected name or (dcl) \n");
    }

    /* if brakets and paranetheses accur --> leads to a f'n */
    while ((type = gettoken()) == PARENS || type == BRACKETS){
        if (type == PARENS)
            strcpy(out, " function returning");
        else {
            strcpy(out, " array");
            strcpy(out, token);
            strcpy(out, " of");
        }
    }
}



int main(){

    /* 1st token on line is the datatype */
    while (gettoken() != EOF){
        strcpy(datatype, token);
        out[0] = '\0';
        dcl();
        if (tokentype != '\n')
            printf("syntax error\n");
        printf("%s: %s %s\n", name, out, datatype);
    }

    return 0;
}
