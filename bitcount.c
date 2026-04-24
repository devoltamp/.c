/* it works like a charm */
#include <stdio.h>

int bitcount(unsigned x){
    int b;
    for (b = 0; x != 0; x >>= 1){
        if (x &= (x-1)){
            b++;
        }
        // using the 1's compliment
        // if (x & 01){
        //     b++;
        // }
    }
    return b;
}

int main(){
    unsigned x = 0110010;
    printf("%d", bitcount(x));
    // bitcount(x)
    return 0;
}
