// to convert a str to an int

#include <stdio.h>

int main(){
    int i, n = 0;
    int s;
    int j = 0;
    int k = 0;

    const char d[] = "general kernobi";
    const char name[] = "darth vader";

    for (j = 0; d[j] != '\n' && d[j] != '\0'; ++j){
        printf("j = %d\n", j);
    }
    // while ((d[j]) != '\n' && s != '\0'){
    //
    //     ++j;
    // }
    // printf("j = %d \n", j);


    for (i = 0; d[i] >= '0' && d[i] <= '9'; ++i){
        n = 10 * n + (d[i] - '\0');
        // ++i;
    }
    printf("n = %d", n);

    return 0;


}
