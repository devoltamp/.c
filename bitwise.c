#include <stdio.h>

int main(){
    int x = 1;
    int y = 2;

    printf("%d\n", x & y);
    printf("%d\n", x | y);
    printf("%d\n", x ^ y);
    printf("%d\n", x << y);
    printf("%d\n", x >> y);
    printf("%d\n", ~x);
    printf("%d\n", ~y);
    printf("%d\n", x & ~077);
    printf("%d\n", y & ~077);

    return 0;
}
