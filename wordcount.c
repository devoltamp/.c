// ok this works noice
#include <stdio.h>
#define IN 1
#define OUT 0

int main(){
    int c, nl, nc, nw, state;
    int num[] = {1,2,3,4,5,6,7,8,9,10};

    state = OUT;
    nl = nw = nc = 0;

    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n'){
            ++nl;
            state = OUT;
        }
        else if(c == ' ' || c == '\t'){
            state = OUT;
        }
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);
    return 0;


}
