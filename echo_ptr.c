/* pointer version */
#include <stdio.h>

static char *argv[][3] = {"echo", "hello there", "general kernobi"};

void test (int argc, char *argv[]){

    int i = 0;
    while (--argc > 0){
        printf("%s%s", *(++argv), (argc > 1) ? " " : "");
    }
    /* (argc > 1) ? " " : ""
    --> this for the space thinge */
    printf("\n");
}

int main(){

    /* argc does not actually gets it value being the count of argv */
    test(3, *argv);
    return 0;
}
