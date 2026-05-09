#include <stdio.h>

int main() {

    int decimal;

    printf("enter a number (>65535): ");
    scanf("%d", &decimal);

    // just by using %X
    printf("hexadecimal: %X\n", decimal);

    return 0;
}
