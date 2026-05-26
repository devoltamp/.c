#include <stdio.h>

/* even a slightest mistake can mess up the whole code ~ a little change*/
void printr(int (*daytab)[13]){
    printf("feb. %d\n", (*daytab)[2]);
}
/* this two will always be in column two
--> no matter the row */

int main(void){

    int temp[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };

    /* 1st row */
    int (*pf)[13] = &temp[0];
    printr(pf);

    /* 2nd row */
    pf = &temp[1];
    printr(pf);

    return 0;
}
