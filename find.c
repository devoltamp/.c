/* this only works with the *argv having two parameters only
& if the code has successfully found the string it'll just just print that */

#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

/* gotta make it global */
char *argv[][3] = {"echo", "general kernobi"};

/* the system get_line was giving the error so the manual version is up */
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

int test (int argc, char *argv[]){

    char line[MAXLINE];
    int found = 0;

    if (argc != 2){
        printf("usage -- find pattern\n");
    }
    else{
        while (get_line(line, MAXLINE) > 0){
            if (strstr(line, argv[1]) != NULL){
                printf("%s", line);
                found++;
            }
        }
    }
    return found;
}

int main(){

    test(2, *argv);
    return 0;
}
