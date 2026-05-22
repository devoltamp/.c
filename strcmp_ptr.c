#include <stdio.h>
#include <string.h>

int str_cmp (char *s, char *t){

    for (; *s == *t; s++, t++)
        if (*s == '\0')
            /* yeah since both of them would be same */
            return 0;
    return *s - *t;
}

int main(){

    char *s, *t;
    s = "";
    t = "";
    /* noice */
    printf("%d\n", str_cmp(s, t));
    return 0;
}
