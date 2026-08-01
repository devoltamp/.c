/* it does nothing meaningful
-- according to the que. */
#include <stdio.h>

int trial(int a, int b, int c){
    if ((a>=b) && (c<b))
        return b;
    else if (a>=b)
        return trial(a, c, b);
    else
        return trial(b, a, c);
}

int main(){
    
    printf("%zu", trial(9, 8, 7));
    return 0;
}
