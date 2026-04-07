// the use of basic custom functions
#include <stdio.h>

int power(int base, int n){
    int i, p;
    p = 1;

    for(i=1; i<=n; ++i){
        p = p*base;
    }
    return p;
}

int main(){
    int i;
    printf("index |\tsquare |cube\n");
    for(i=0; i<10; ++i){
        printf("%d\t%d\t%d\n", i, power(2,i), power(-3, i));

    }
    return 0;
}
