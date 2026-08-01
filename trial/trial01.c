#include <stdio.h>
void p1();
void f1();

void p1(){
    int x = 10;
    int y = 3;
    f1(y, x, x);

    /* it won't do sh*t */
    printf("%d", x);
    printf("\n");
    printf("%d", y);
}

void f1(int x, int y, int z){
    y = y + 4;
    z = x + y + z;
}

int main(){
    p1();
    return 0;
}
