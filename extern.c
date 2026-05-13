#include <stdio.h>
#include <string.h>
#define MAX 100

extern int j;
/* extern is not given memory untill it's actual time to work
no need to define the size
*/

void fruitloop (void){
    for (int j = 0; j<MAX; j++)
    printf("%d", j);
}

char uname (void){

    const char name[10];
    printf("enter your name: ");
    scanf("%s", &name);

    int len = strlen(name);
    printf("%d", len);
    /* extern gives some system errors */
}
