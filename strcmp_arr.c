#include <stdio.h>
#include <string.h>

int str_cmp (char *s, char *t){

    int i;
    /* that means != '\0' */
    for (i = 0; s[i] == t[i]; i++){
        if (s[i] == '\0')
            return 0;
    }
    return s[i] - t[i];
}

int main(){

    char t[] = "";
    char s[] = "hola";

    /* works like a charm
    t < s --> +ve
    t > s --> -ve
    t = s --> 0
    these are all the return values & they will be random
    */

    printf("%d\n", str_cmp (s, t));
    return 0;
}
