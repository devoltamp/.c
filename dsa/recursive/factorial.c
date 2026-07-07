#include <stdio.h>

int fact(int n){

    /* base case */
    if (n == 1){
        return 1;
    }
    else{
        return (n * fact(n - 1));
        /* this thing gets all the
        needed values */
    }
}

int main(){

    int num, val;
    printf("enter the #n: ");
    scanf("%d", &num);
    val = fact(num);

    printf("factorial of %d = %d", num, val);
    return 0;
}
