/* concatination of two strings s & t
--> never confuse with the array and pointer array both
can be written as if like they are one single thing
*/
#include <stdio.h>
#include <string.h>

void str_cat (char *s, char *t){

    while (*s != '\0')  /* if you do that here it does not get stored */
        s++;

    while (*t != '\0'){
        *s++ = *t++;
    }
    *s = '\0';
}

int main(){

    /*
    s = "dev";
    this is not editable
    */

    char s[50] = "dev";
    char *t;
    t = "dev";


    str_cat(s, t);
    printf("%s\n", s);

    return 0;
}
