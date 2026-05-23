/* noice --> the best part is that it actually does not print the echo it knows */
#include <stdio.h>
#include <string.h>

static char *argv[][3] = {"echo", "hello there", "general kernobi"};

void test(int argc, char *argv[]){


    /* i = 0 cause the argv[0] is the command it self
    if looked closely the argc takes the value it self */
    int i = 0;

    for (i = 1; i < argc; i++){
        printf("%s%s", argv[i], (i < argc - 1) ? " " : "");

    }

    printf("\n");
    printf("%d\n", i);  /* i being the argc --> again cool */
}

int main(){


    test(3, *argv);
    return 0;
}
