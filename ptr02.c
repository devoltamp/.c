/* usage of pointers in scanf
cool one */

#include <stdio.h>

int main(){

    int a;
    int *p = NULL;

    printf("enter a #n: \n");
    scanf("%d", &a);

    p = &a;
    printf("%x\n", p);
    printf("%d\n", *p);

    return 0;

}
