// str is just a char arr
#include <stdio.h>
#define MAX 100
// EOF is '\0'

int main(){
    int i = 0;
    int s;

    while((s = getchar()) != '\n' && s != '\0'){
        ++i;
    }

    printf("%d", i);
    return 0;
}
