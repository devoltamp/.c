#include <stdio.h>
// void part - noice

int main(void){

    char choice;

    do{
        printf("enter a #n from [1,2,3,4]: ");
        scanf("%c", &choice);
    }
    while(choice < '1' || choice > '4');
    printf("you entered %c", choice);

    return 0;
}
