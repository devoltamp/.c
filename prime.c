/* find all the prime #n's
using sieve eratosthenes
*/

#include <stdio.h>
#define MAX 1000

void initialize (int sieve[]){

    int i;
    sieve[0] = sieve[1] = 0;

    // set all to 1
    for (i = 2; i<MAX; i++){
        sieve[i] = 1;
    }
}

void mark_multiples (int sieve[]){

    int i, j;
    for (i = 2; i<MAX; i++){
        // same as sieve[i] > 0
        if (sieve[i]){
            for (j = 2*i; j<MAX; j += i){
                sieve[j] = 0;
            }
        }
    }
}

void print_sieve (int sieve[]){

    int i;
    printf("prime #n's: \n");

    for (i = 2; i<MAX; i++){
        if (sieve[i]){
            printf("%4d", i);
            // it happens to be the index value not the main sieve value
        }
    }
}


int main(){

    int sieve[MAX];

    initialize(sieve);
    mark_multiples(sieve);
    print_sieve(sieve);

    return 0;
}
