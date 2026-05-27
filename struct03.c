#include <stdio.h>

struct point makepoint(int x, int y){

    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

struct point{
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
};


int main(){

    struct point origin;
    struct point *pp;

    /* these three are the main notation used --> the goat */
    struct rect r;
    struct rect *rp;
    rp = &r;


    pp = &origin;
    origin = makepoint(0, 0);
    /* a little twist that the &origin is assigned to the pp */

    printf("%d, %d\n", (*pp).x, (*pp).y);
    printf("%d, %d\n", pp->x, pp->y);
    return 0;

}
