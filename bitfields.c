/* to write the memory efficient codes
ex. for the compact date
everything will be in the power of two -- that's nice */
#include <stdio.h>

struct compactdate{
    unsigned int day  : 5;
    unsigned int month : 4;
    unsigned int year  : 7;
};
/* total bits: 16bits ~ 2bytes
or on x64 ~4bytes */

int main(){

    struct compactdate dt;
    dt.day = 25;
    dt.month = 12;
    dt.year = 26;

    /* it's a cristmas day */
    printf("size of the stuct: %zu\n", sizeof(dt));
    printf("%02d/%02d/%02d\n", dt.day, dt.month, 2000 + dt.year);
    return 0;
}

/* the computer memory is a byte-wise it will not point if the pointer is pointing to the bit wise */
