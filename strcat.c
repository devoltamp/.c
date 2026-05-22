/* test code
still uses the array
*/

#include <stdio.h>
#include <string.h>

int main(){

    char s[6] = "dev";

    int i = 3;
    for (i; i < 7; i++){
        *(s + i) = 0;
    }

    /* to print the s */
    int j = 0;
    while (s[j] != '\0'){
        printf("%c", s[j]);
        j++;
    }
}
