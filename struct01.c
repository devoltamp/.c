/* makepoint --> make a point from x and y components
not only that it can be used to initialize too.
*/
#include <stdio.h>

struct point{
    int x;
    int y;
};

/* still not enough */
struct point makepoint(int x, int y){

    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
    /* cause the declaration was for the temp
    this will go to temp.x & temp.y */
}

int main(){

    struct point my_function = makepoint(50, 100);
    printf("%d, %d\n", my_function.x, my_function.y);

    return 0;
}
