/* a little bit of tweaking is done
int printf(char *format, arg1, arg2); --- the compiler will tell
*/

#include <stdio.h>


int main(){

    int temp;
    char name[] = "hello there!";

    temp = printf("hello there!\n");
    /* printf("%ld", printf("hello there!")); */
    printf("%ld\n", temp);

    printf("--- tweaks ---\n");
    printf("%-10s\n", name);
    printf("%.10s\n", name);


    return 0;
}

/* sprintf -- instead of the conversion into char
this will kept as string */
