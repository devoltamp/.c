// the horizontal histogram with #
#include <stdio.h>
#define MAX 10
#define IN 1
#define OUT 0

int main(){

    int ndigt[10];
    char num[] = {1,2,3,4,5,6,7,8,9,10};
    int c, nl, nc, nw, state;


    // for (int i=0; i<10; ++i){
    //     ndigt[i] = 0;
    // }
    // // printf("%d\n", ndigt);
    // for (int i=0; i<10; ++i){
    //     printf("%d", ndigt[i]);
    // }
    // printf("\n");
    // for (int i=0; i<10; ++i){
    //     printf("%d", num[i]);
    // }
    //
    // for(int i=0; i<10; ++i){
    //     // printf("'#'* 'num[i]'");
    //     // char xo = '#' + num[i];
    //     // printf("%c\n", xo);
    //
    //     // printf(char(num[i]) * "#");
    //     for(int j=0; j<10; ++j){
    //         int temp = num[j];
    //         printf("%d", temp);
    //     }
    //     // int temp = num[i];
    //     // printf("%d", temp);
    // }

    state = OUT;
    nl = nw = nc = 0;
    printf("name\n");
    c = getchar();
    // putchar(c);
    while(c != EOF){
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\n' || c =='\t')
            state = OUT;
        else if(state == OUT)
            state = IN;
            ++nw;
    }
    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}
