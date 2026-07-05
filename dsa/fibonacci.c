/* for 10 to 20 it's fine
but for 100 not so good */
#include <stdio.h>
#include <time.h>

int fib(int n){

    /* base para. */
    if (n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        /* main thinge */
        return (fib(n - 1) + fib(n - 2));
    }
}

int main(){

    int n, op;
    printf("enter the #n of terms: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        op = fib(i);
        printf("%d ", op);
    }
    return 0;
}
