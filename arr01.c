#include <stdio.h>
#define SIZE 5

int main(void){

    int a[SIZE] = {1,2,3,4,5};

    printf("a = %d\n", a);
    printf("&a[0] = %d\n", &a[0]);
    printf("a[0] = %d\n", a[0]);

    // int a[2] = {1,1};
    int b[2] = {1,1};
    b[2] = 100;
    printf("%d", b[2]);
    /* do not go out of bound */
    for (int i = 0; i<4; i++){
        printf("%d ", b[i]);
    }


    return 0;
}
