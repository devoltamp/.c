/* binary to decimal */
#include <stdio.h>
#include <stdlib.h>

int main() {
    char binaryStr[] = "110101";
    char *endPtr;

    unsigned long long decimalVal = strtoull(binaryStr, &endPtr, 2);

    printf("Binary: %s\n", binaryStr);
    printf("Decimal: %llu\n", decimalVal);

    return 0;
}
