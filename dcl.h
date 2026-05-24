/* parse a declarator
the declared in the dcl */

void dcl(void){

    int ns; /* #n of * */

    for (ns = 0; gettoken() == '*';){
        ns++;
    }

    dirdcl();
    while (ns-- > 0){
        srtcat(out, " pointer to");
    }
}
