/* >> adjusted n bit field of x at the position p
    where the n, p are positve
*/

#include <stdio.h>

unsigned getbits(unsigned x, int p, int n){
    return (int)(x >> (p+1-n)) & ~(~ 0 << n);
}

int main(){
    unsigned int x = 1;

    printf("%d", getbits(x, 4, 3));
    return 0;
}
