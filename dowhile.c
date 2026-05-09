#include <stdio.h>

int main(){

    int number, sum = 0;

    do{
        sum += number;
        printf("enter a number with 999: ");
        scanf("%d", &number);
    }
    while(number != 999);

    if (number == 99){
        printf("total is: %d\n", number);
    }
    else{
        printf("total is: %d\n", sum);
    }

    return 0;
}
