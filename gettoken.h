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
