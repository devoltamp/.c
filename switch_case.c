// the part this calculates using the switch case
#include <stdio.h>

int main(){
    int i, c;
    int temp, nwhite, nother = 0;
    int ndigit[10];

    // start with a zero
    for (i = 0; i<10; i++)
        ndigit[i] = 0;

    printf("write something;\n");

    while ((c = getchar()) != EOF){
        temp ++;
    }
    printf("%d\n", temp);

    switch(c){

        // for #n's
        case '0' : case '1' : case '2' : case '3' : case '4' :
        case '5' : case '6' : case '7' : case '8' : case '9' :
        // case '0'|| '1'|| '2'|| '3'|| '4'|| '5'|| '6'|| '7'|| '8'|| '9':
        {
            ndigit[c - '0']++;
            printf("wtf\n");
            // break;
        }
        // for spaces
        case ' ':
        case '\n':
        case '\t':
            nwhite ++;
            printf("wtf\n");
            // break;
        default:
            nother++;
            printf("wtf\n");
            // break;

    }

    printf("digits =");
    for (i = 0; i<10; i++)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
    return 0;
}
