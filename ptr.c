/* pointer is a variable that contains the address of a variable
& > this assigns the add. of the variable to a poniter
* > unary operator using this the object pointing can be accessed
*/

#include <stdio.h>

int main(){

    int x = 1, y = 2;
    int z[10];

    int *ip;    /* ip is a poniter to int & also it's an int */

    ip = &x;
    y = *ip;                // 1
    printf("%d\n", y);
    y = *ip + 1;            // 2
    ++y;                    // 3
    *ip += 1;               // 2
    ++*ip;                  // 3
    (*ip)++;                // 4
    printf("%d\n", y);      // 3
    printf("%d\n", *ip);    // 4

    /* it's still a variable means that you can assign that too */
    int *iq;
    iq = ip;
    printf("%d\n", *iq);    // 4

    /*
    *ip -- values
    ip  -- memory add.
    &   -- simply points
    */

    *ip = 0;
    ip = &z[0];
    printf("%d\n", ip);

    return 0;

}
