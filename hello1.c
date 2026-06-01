/* no need for the ifdefs -- if you have got only one condition */
#include <stdlib.h>
#include <windows.h>
#define STDOUT_FILENO _fileno(stdout)


int main(void) {

    const char hello[] = "hello there!\n";
    write(STDOUT_FILENO, hello, sizeof(hello) - 1);
    return 0;
}

/* at this point i gotta just write the assembly */
