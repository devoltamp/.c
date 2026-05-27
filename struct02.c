#include <stdio.h>
#define XMAX 200
#define YMAX 200


struct point{
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
};

struct point makepoint(int x, int y){

    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

/* addpoint: that will add two points */
struct point addpoint(struct point p1, struct point p2){
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
    /* instead of making an explicit temp the value is stored in the p1 */
}

/* point in rectangle */
int ptinrect(struct point p, struct rect r){
    return p.x >= r.pt1.x && p.x < r.pt2.x
        && p.y >= r.pt1.y && p.y < r.pt2.y;
}

int main(){

    struct rect screen;
    struct point middle;
    struct point makepoint(int, int);

    /* making the rect. from 0,0 to the max of a & y */
    screen.pt1 = makepoint(0, 0);
    screen.pt2 = makepoint(XMAX, YMAX);

    puts("middle of two points:");
    middle = makepoint((screen.pt1.x + screen.pt2.x) / 2 , (screen.pt1.y + screen.pt2.y) / 2);
    printf("%d, %d\n", middle.x, middle.y);

    /* again reuse of the middle */
    puts("adding of two points:");
    middle = addpoint(screen.pt1, screen.pt2);
    printf("%d, %d\n", middle.x, middle.y);


    /* for point in rectangle */
    int i;
    /* i = ptinrect(makepoint(10, 20), screen);
    giving the value is little tricky
    */
    i = ptinrect(middle, screen);
    if (i == 1)
        printf("it's in");
    else
        printf("it's not");

    return 0;
}
/* works like a charm with a little tweaks */
