/* noice one on he p.no. 159
but it's does not look great */

#include <stdio.h>

int main(){

    int *day[1], *year[1];
    char *monthname[1];

    puts("enter day, month & year: ");
    scanf("%d", day);
    scanf("%s", monthname);
    scanf("%d", year);

    printf("%d/%s/%d", *day, monthname, *year);
    return 0;
}
