#include <stdio.h>

/* printd: print n in decimal */
/* this is recursive */

void prtd(int n){

    if (n < 0){
        putchar('-');
        n = -n; // to make the #n positive
    }
    
    if (n / 10){
        prtd(n / 10); // from this it goes straight to the top part
    }
    putchar(n % 10 + '0');
}

int main(){

    int n;
    printf("enter a number: \n");
    scanf("%d", &n);
    prtd(n);
    return 0;

}
