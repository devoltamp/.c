/* overflow */
#include <stdio.h>

struct tiny{
    unsigned int count : 2;
    /* max being the 11 aka -- 3 */
};

int main(){
    struct tiny t;
    t.count = 4;        /* out of bound -- it'll truncate */
    printf("%d\n", t.count);
    return 0;
}
