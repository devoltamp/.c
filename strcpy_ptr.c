#include <stdio.h>
#include <string.h>


/* version - I */
void str_cpy1(char *s, char *t){
    while ((*s = *t) != '\0'){
        s++;
        t++;
        /* the add. gets ++ here */
    }
}

/* version - II */
void str_cpy2(char *s, char *t){
    while ((*s++ = *t++) != '\0')
        ;
}

/* version - III */
void str_cpy3(char *s, char *t){
    while (*s++ = *t++)
        ;
}

void print(void){

}

int main(){

    char *t, *s;
    t = "dev";

    // I
    str_cpy1(s, t);
    /* this just came to me -- something that experienced c programmer would prefer */
    while (*s){
        printf("%c", *s++);
    }
    printf("\n");


    // II
    str_cpy2(s, t);
    while (*s){
        printf("%c", *s++);
    }
    printf("\n");


    // III
    str_cpy3(s, t);
    while (*s){
        printf("%c", *s++);
    }
    printf("\n");


    return 0;


}
