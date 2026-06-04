/* sizeof returns a size_t as a type -- umsigned int
to represent any object size in bytes */
#include <stdio.h>
#include <stddef.h>

int main(){

    int num[10];
    size_t temp = sizeof(num);
    printf("%zu bytes\n", temp);
    /* int 4 * 10 = 40 */

    for (size_t i = 0; i < 10; i++){
        num[i] = i * 2;
        printf("%d\n", num[i]);
    }
    return 0;
}
