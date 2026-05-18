#include <stdio.h>

void read(int *x, int *y){

    printf("1st int: \n");
    scanf("%d", x);
    printf("2nd int: \n");
    scanf("%d", y);
}

void swap(int *x, int *y){

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){

    int a, b;
    read(&a, &b);
    /* &a = *x and &b = *y */
    printf("before the f'n call: a = %d and b = %d\n", a, b);
    swap(&a, &b);
    printf("after the f'n call: a = %d and b = %d\n", a, b);
    return 0;

}
