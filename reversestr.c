#include <stdio.h>
#include <string.h>

// reverse the str using it's own values
void reverse(char s[]){

    int i,j;
    int c;
    // i was wrong about the c

    for (i = 0, j = strlen(s) - 1; i<j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
        // it will give the initial values to the end of the arr - cool

        // printf("%c", c);
    }
    int n = strlen(s);
    for (int k = 0; k<n; k++)
        printf("%c", s[k]);
}

int main(){

    char s[] = {"hello there"};
    reverse(s);
    return 0;
}
