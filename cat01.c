/* v.2 */

#include <stdio.h>
#include <stdlib.h>

void filecopy(FILE *ifp, FILE *ofp){

    int c;
    while((c = getc(ifp)) != EOF){
        putc(c, ofp);
    }
}

int main(int argc, char *argv[]){

    FILE *file;
    char *prog = argv[0];   /* for the name of the command */

    if (argc == 1)
        filecopy(stdin, stdout);
    else{
        while(--argc > 0){
            if ((file = fopen(*++argv, "r")) == NULL){
                fprintf(stderr, "%s: can't open %s\n", prog, *argv);
                /* makes the error message formatted */
                exit(1);
            }
            else{
                filecopy(file, stdout);
                fclose(file);
            }
        }
    }
    if (ferror(stdout)){
        puts("error writing stdout");
        exit(2);
    }
    exit(0);
    /* for the smooth return 0; */
}

/* (c = getc(file)) != EOF -- can be replaced by !feof(file)
all inside a while */
