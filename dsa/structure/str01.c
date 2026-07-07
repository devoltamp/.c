/**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* dynamic data */
struct str_buff{
    char *data;
    int len;
};

/* simulating the oop */
void soop(void){

    struct shape{
        char name[20];
        float (*area)(struct shape *);
        float radius;
    };

    float circle_area(struct shape *s){
        return 3.14 * s->radius * s-> radius;
    }

    /* giving the values,
    c.area() --> float(*area) --> taking the arg. as c --> therefore &c
    greatest thing i've seen today
    */
    struct shape c = {"circle", circle_area, 5.0};
    printf("%f\n", c.area(&c));
}

int main(){

    struct str_buff sb;
    sb.data = malloc(100);
    strcpy(sb.data, "hello there!");
    sb.len = strlen(sb.data);
    printf("%d\n", sb.len);

    soop();
    return 0;
}
