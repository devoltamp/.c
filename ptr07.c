#include <stdio.h>
#include <string.h>
/* m = messaage
both of them adds \0 at the end
*/

int main(){

    char am[] = "dev";
    char *pm;
    pm = "dev p";     /* pm pointer just points to the string constant */

    int n = strlen(am);
    int m = strlen(pm);
    printf("%d\n", n);
    printf("%d\n", m);

    return 0;
}
