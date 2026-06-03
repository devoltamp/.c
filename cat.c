/* concatenate files -- v.1
when i saw the *++argv --> to check all the given files via cmd
i was amazed */

#include <stdio.h>

void filecopy(FILE *ifp, FILE *ofp){

    int c;
    while((c = getc(ifp)) != EOF){
        putc(c, ofp);
    }
}

/* cmd: the arguments are given from the cmd */
int main(int argc, char *argv[]){

    FILE *fp;
    if (argc == 1)
        filecopy(stdin, stdout);
    else{
        while (--argc > 0){

            /* checked for all the files that you could add */
            if ((fp = fopen(*++argv, "r")) == NULL)
                puts("couldn't open");
            else
                filecopy(fp, stdout);
                fclose(fp);
        }
    }
    return 0;
}
