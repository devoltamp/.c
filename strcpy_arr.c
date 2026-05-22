#include <stdio.h>
#include <string.h>

/* the array version */
void str_cpy(char *s, char *t){

    int i = 0;
    while ((s[i] = t[i]) != '\0'){
        i++;
    }
}

int main(){

    char t[] = "hola";
    int n = strlen(t);
    char s[n];
    str_cpy(s, t);


    int i = 0;
    /* cause initialy s had nothing in it but it copied staight from t - noice */
    while (s[i] != '\0'){
        printf("%c", s[i]);
        i++;
    }
    return 0;
}
