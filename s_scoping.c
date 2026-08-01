/* c uses lexical scoping
-- so that's why it's printing 00 */
#include <stdio.h>
#include <stdlib.h>

int x;
void show(){
    printf("%d", x);
}

void small(){
    int x = 0.125;
    x = 0.25;
    printf("%d", x);
    /* how does the x == 0 -- found it */
    // show();
}

int main(){
    small();
    return 0;
}
