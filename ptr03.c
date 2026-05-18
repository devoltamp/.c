/* different declaration of scanf - idk */
#include <stdio.h>

int main(){

    int a, b;
    int *p = NULL;

    p = &a;
    *p = 5;
    printf("%d\n", *p);

    p = &b;
    printf("enter an int: \n");
    scanf("%d%*c", p);

    /* the diff.
    %*c wierd */

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;

}
