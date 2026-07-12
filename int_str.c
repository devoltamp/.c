/* int to string */
#include <stdio.h>

int main() {
    int num = 4512;
    char str[12];

    /* main thinge */
    snprintf(str, sizeof(str), "%d", num);
    return 0;
}
