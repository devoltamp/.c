// a liitle fun code

#include <stdio.h>
#include <string.h>

void fullname(char name[], char abcd[]){

    int i, j;

    for (i = 0; i<strlen(name); i++){
        for (j = 0; j<strlen(abcd); j++){
            if(abcd[j] == name[i]){
                for (int k = 0; k <= j; k++) {
                    printf("%c", abcd[k]);
                }
                // printf("\n");
                break;
            }
        }
        printf("\n");
    }
}


int main(){

    char name[] = {"dev"};
    char abcd[] = {"abcdefghijklmnopqrstuvwxyz"};
    // int n = strlen(name);
    // int m = strlen(abcd);

    fullname(name, abcd);

    return 0;
}
