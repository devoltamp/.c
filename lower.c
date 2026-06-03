#include <stdio.h>
#include <ctype.h>

int main(){

    int c;
    while ((c = getchar()) != EOF)
        putchar(tolower(c));

    /* ctrl + z should do the trick  */
    while ((c = getchar()) != EOF)
        putchar(toupper(c));
    return 0;
}
