#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define NSYM (sizeof tab)

struct {

    char *name;
    int flags;
    int utype;

    union utag{
        int ival;
        float fval;
        char *sval;
    } u;

} tab;
/* as the tab[0] -- meaning that everything is in that array stored as a struct */

int main(){

    tab.name = (char *)malloc(100 * sizeof(char));
    if (tab.name == NULL) return -1;
    puts("struct name: ");
    scanf("%99s", tab.name);

    /* union as a str */
    tab.u.sval = (char *)malloc(100 * sizeof(char));
    puts("union name:");
    scanf("%99s", tab.u.sval);

    printf("\n");
    printf("%s\n", tab.name);
    printf("%s\n", tab.u.sval);
    free(tab.u.sval);
    free(tab.name);

    /* union as an int */
    tab.flags = 1;
    tab.utype = 3;
    printf("%d\n", tab.flags);
    printf("%d\n", tab.utype);


    tab.u.ival = 2;     /* it garbaged the ivalue */
    printf("%d\n", tab.u.ival);
    tab.u.fval = 0.2;
    printf("%f\n", tab.u.fval);

    return 0;
}
/* always check for the null and free the malloc */
