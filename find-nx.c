/* -nx --> print line that does not match the pattern
& also with it's line number */

#include <stdio.h>
#include <string.h>
#include "get_line.h"

#define MAXLINE 1000
/* the contion was != 1 so i made it to == 1 */

char *argv[][2] = {"find -x -n", "noice"};

int test(int argc, char *argv[]){

    char line[MAXLINE];
    long lineno = 0;
    int c, except = 0, number = 0, found = 0;

    while (--argc > 0 && (*++argv)[0] == '-'){
        while (c = *++argv[0]){
            switch(c){
                case 'x':
                    except = 1;
                    break;
                case 'n':
                    number = 1;
                    break;
                default:
                    printf("illegal option\n");
                    argc = 0;
                    found = -1;
                    /* being the error */
                    break;
            }
        }
    }

    // if (argc != 1)
    //     printf("usage -- find -x -n pattern\n");
    //
    // else {
    while (get_line(line, MAXLINE) > 0){
        lineno++;

        /* the *argv get's to line[] -- that is cool */
        if ((strstr(line, *argv) != NULL) != except){
            if (number > 0)
                printf("%ld", lineno);
            printf("%s", line);
            found ++;
        }
    }
    // }
    return found;
}

int main(){

    test(1, *argv);
    return 0;
}
