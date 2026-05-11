// via srand() the number guessing game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int secret, number;
    int counter = 0;
    // if the var is not initialized it'll throw random sh*t (which i guess could be used as rand() without rang)
    // printf("%d", counter);

    srand(time(NULL)); // it's never directly used
    secret = rand() % 100 + 1;
    // printf("%d", secret);

    printf("enter a number betw'n 0-100\n");
    do{
        printf("try your luck: ");
        scanf("%d", &number);
        counter++;
        // sigle lined if loops
        if (number > secret)
            printf("too high!\n");
        if (number < secret)
            printf("too low!\n");
    }
    while (number != secret);

    printf("\nit took you %d guesses to find the secret number", counter);
    return 0;
}
