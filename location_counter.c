#include <stdio.h>
#include <string.h>

int main(){

    /* location counter */
    int lc = 0x1000;
    char optcode[10];

    while(1){
        puts("enter the instruction type (INT, CHAR, JUMP, END):");
        scanf("%s", optcode);

        if (strcmp(optcode, "END") == 0)
            break;
        if (strcmp(optcode, "INT") == 0)
            lc += 4;
        else if (strcmp(optcode, "CHAR") == 0)
            lc += 1;
        else if (strcmp(optcode, "JUMP") == 0){
            lc += 3;
        }
        printf("location counter: 0x%X\n", lc);
    }

    /* the final lc */
    printf("location counter: 0x%X\n", lc);
    return 0;
}
