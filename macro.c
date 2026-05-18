#include <stdio.h>

/* the explicit defination of that is
called as macro*/
#define forever for(;;)
#define max(A, B) ((A) > (B) ? (A) : (B))
#define square(x) x*x

/* to print the error message #expr is used because the type is not defined up there */
#define dprint(expr) printf(#expr " = %g\n", expr)

#define paste(concate) printf(#concate "\n", f ## b)



int main(){

    int x = max(12, 34);
    int y = max(96, 34);
    printf("%d\n", x);
    x = square(x);
    printf("%d\n", x);


    char expr;
    expr = x/y;
    dprint(x/y);
    /* this badboy right here just points out
    to the expansion to it's thing*/

    int f, b;

    printf("enter the front:\n");
    scanf("%d", &f);
    printf("enter the back: \n");
    scanf("%d", &b);

    int concate;
    paste(concate);
    // concatination is little odd -- i'll come back







    return 0;
}
