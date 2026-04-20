#include <stdio.h>
#include <string.h>

int len_s, len_t;

void cat(char s[], char t[]){
    int i = 0, j = 0;

    while(s[i] != '\0'){
        i++;
    }
    len_s = i;

    int k = 0;
    while(t[k] != '\0'){
        k++;
    }
    len_t = k;

    j = 0;

    while((s[i++] = t[j++]) != '\0')
        ;

    printf("%s\n", s);
}

int main(){
    char s[100] = "hello there";
    char t[] = "general kernobi";

    cat(s, t);
    return 0;
}
