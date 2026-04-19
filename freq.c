// to find out a single word

#include <stdio.h>
#include <string.h>

int main(){
    int i, n = 0;
    int s;
    int j = 0;
    int k = 0;
    int freq = 0;

    const char d[] = "dduckducktheuckup";

    // to find out the length
    for(j = 0; d[j] != '\0' && d[j] != '\n';){
        ++j;
    }
    printf("length = %d", j);

    // to find out the freq
    for(i = 0; i < j; i++){
        if (d[i] == 'd'){
            freq ++;
        }
    }

    // printf("count = %d\n", j);
    printf("\n");
    printf("freq = %d", freq);
    return 0;

}
