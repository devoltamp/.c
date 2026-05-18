/* still not the quite thing i was looking for
this is great
*/

#include <stdio.h>
#define mvar(prefix, num) prefix ## num
#define mvar1(prefix, num1, num2) prefix ## num1 ## num2

int main() {

    int var1 = 100;
    int var2 = 200;


    printf("%d\n", mvar(var, 1));
    printf("%d\n", mvar(var, 2));
    /* var + 1 = var1
    it's like prefix + suffix that combines them
    */

    int dev12 = 67;
    printf("%d\n", mvar1(dev, 1, 2));


    return 0;
}
