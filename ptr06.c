/* arithmatic operations on pointers */
#include <stdio.h>

int main(){

    int a, b, c;
    int *ao, *bo;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    ao = &a;
    bo = &b;

    /* for a pointer to pointer it's illegal
    printf("%d\n", ao + bo);
    */
    printf("%d\n", *ao + 100);  // with integer it's fine

    ////////////////////////////
    int *d = NULL;
    d = &a;     // 1
    float e = 1.0;
    printf("%f\n", *d + e);

    return 0;
}
