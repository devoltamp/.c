#include <stdio.h>

int strlen(char *s){
    /* it's still broken doesn't count the spaces */
    char *p = s;
    while (*p != '\0'){
        p++;
    }

    return (p - s);
}

int main(){

    char s;
    puts("enter a str:");
    scanf("%s", &s);

    printf("%d\n", strlen(&s));

    return 0;
}
