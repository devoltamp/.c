#include <stdio.h>

#if SYSTEM  == SYSV
    #define HDR "sysv.h"
#elif SYSTEM == BSD
    #define HDR "bsd.h"
#elif SYSTEM == MSDOS
    #define HDR "msdos.h"
#else
    #define HDR "default.h"
#endif

/* by depending upon the os
it provides the header file not all */
#include HDR

int main(void){
    return 0;
}
