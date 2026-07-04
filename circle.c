/* should i learn the graphics? */
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char*)"C:\\TURBOC3\\BGI");

    setcolor(BLUE);
    rectangle(150, 150, 450, 350);

    /* circle in the Center */
    setcolor(YELLOW);
    circle(300, 250, 50);

    getch();
    closegraph();

    return 0;
}
/* for the compilation & execution
g++ .\circle.c -o o -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
./o.exe
*/
