// the horizontal histogram with #
#include <stdio.h>

int main(){

    int num[] = {1,2,3,4,5,6,7,8,9,10};

    for(int i=0; i<10; i++){
        printf("%d \t|", num[i]);
        // num[i] = temp;
        for(int j= 0; j < num[i]; j++){
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
