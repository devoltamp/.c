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
