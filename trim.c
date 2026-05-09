#include <stdio.h>
#include <string.h>

int trim(char s[]){

    int n;
    for (n = strlen(s)-1; n >= 0; n--)
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
            break;
            // it does not actually do anything > needs some improvement
            // dennis be like fcuk that
    s[n+1] = '\0';
    return n;

    /* the n is pretty straight forward meaning
    19 -1 = 18*/
}

int main(){

    int ans;

    char s[] = {"where is your sword"};
    ans = trim(s);
    printf("ans: %d", ans);
    return 0;
}

// continue statements also works the kinda same
