/* fscanf -- needs a local variable to store the data */
#include <stdio.h>

int main(){

    FILE *file = fopen("hello.txt", "r");
    if (file == NULL) return -1;

    char temp[100];
    while (fscanf(file, "%s", temp) != EOF){
        if (*temp == ' ')
            printf(" ");
            /* does not account for the space -- that's a bummer */
        printf("%s", temp);
    }

    fclose(file);
    return 0;
}
