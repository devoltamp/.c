/* diff approach to define a pointer */
#include <stdio.h>

int main(){

    int a[10] = {0};
    int *pa;

    pa = &a[0];
    // printf("%d\n", *pa);     // if want to know the value

    printf("value\tmemory add.\n");
    for (int i = 0; i<10; i++){
        a[i] = i;
        pa = &a[i];

        printf("%d\t", *pa);         // value
        printf("%x\n", &pa[i]);     // add.

    }
    return 0;
}
