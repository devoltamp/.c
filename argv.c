#include <stdio.h>

/*
you gotta type in like this --> .\o.exe hello there
char *argv[] == char **argv --> both are exactly the same
*/

int main(int argc, char **argv){

    printf("total #n of argc: %d\n", argc);

    for (int i = 0; i < argc; i++){
        printf("argument %d: %s\n", i, argv[i]);
    }

    printf("\n");
    /* this also works like a charm */
    while (*argv != NULL)
        printf("%s\n", *argv++);

    return 0;
}
