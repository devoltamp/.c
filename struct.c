#include <stdio.h>
#include <math.h>

int main(){

    struct point{
        int x;
        int y;
    };
    struct point pt;

    /* taking the value */
    printf("a: ");
    scanf("%d", &pt.x);
    printf("b: ");
    scanf("%d", &pt.y);

    // struct point p2 = {.x = 10, .y = 20};

    printf("%d, %d\n", pt.x, pt.y);

    /* to compute the distance */
    double dist, sqrt(double);
    dist = sqrt((double)pt.x * pt.x + (double)pt.y *pt.y);
    printf("%lf\n", dist);


    /* for the rectangle */
    struct rect {
        struct point pt1;   // --> & that also divies into x, y
        struct point pt2;
    };
    struct rect screen;

    struct rect pt1 = {10, 20};
    struct rect pt2 = {50, 60};

    printf("%d\n", screen.pt1.x);


    return 0;
}
