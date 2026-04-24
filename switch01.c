#include <stdio.h>

int main(){
    int c;
    char name;


    // testing
    printf("choose bet'n 0 & 1:\n");
    c = getchar();
    // name = putchar(c);
    // printf("%c", name);

    switch(c){
        case '1':
            printf("you are the chosen one\n");
            break;
        case '0':
            printf("you are not the chosen one\n");
            break;
        default:
            printf("high ground\n");
            break;
    }
    return 0;
}
