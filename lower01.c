/* a little automation -- as the name gets invoked */

#include <stdio.h>
#include <ctype.h>

int main(){

    int c;
    while ((c = getchar()) != EOF)
        if (isupper(c))
            putchar(tolower(c));
        else
            putchar(toupper(c));

    return 0;
}
