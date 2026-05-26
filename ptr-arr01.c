#include <stdio.h>

int main(){

    int i = 0;
    int *daytab[13];

    /* making it all zero */
    while (i < 13){
        daytab[i] = i;
        printf("%d\n", daytab[i]);
        i++;
    }

    return 0;
}
