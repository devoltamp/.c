/* fgets & fputs */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100
/* fgets ignores the \n -- so could not print the new line after that */

int main(){

    FILE *file = fopen("cat.txt", "r");
    if (file == NULL){
        perror(NULL);       /* using NULL it eliminates the need of const char * */
        return EXIT_FAILURE;
    }

    char temp[MAX];
    if (fgets(temp, MAX, file) != NULL){
        fputs(temp, stdout);
        /* stdout is more prefereable */
    }
    else{
        puts("file is empty");
    }

    fclose(file);
    exit(0);
}

/* in the return additional things like
EXIT_FAILURE & EXIT_SUCCESS is added */
