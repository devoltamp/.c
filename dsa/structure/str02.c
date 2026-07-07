#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* no fixed size */
struct packet{
    int len;
    char payload[];
};

/* padding problemo
depending upon the arrangement of the var. */
struct ex{
    char b;
    int a;
    char c;
};

/* no padding */
#pragma pack(push, 1)
struct _ex{
    char b;
    int a;
    char c;
};
#pragma pack(pop)

int main(){

    struct packet *p;
    p = malloc(sizeof(struct packet) + 100);
    p->len = 100;
    p->len = strlen(p->payload);
    printf("%d\n", p->len);
    printf("%zu\n", sizeof(struct packet) + 100);
    printf("%zu\n", sizeof(struct ex));
    printf("%zu\n", sizeof(struct _ex));

    return 0;
}
