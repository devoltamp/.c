/* greatest common divisor
-- by the euclid's algo.
y will be op */
#include <stdio.h>

int gcd(int x, int y){

    int rem;
    rem = x % y;
    if (rem == 0){
        return y;
    }
    else{
        return (gcd(y, rem));
    }
}

int main(){

    int num1, num2, op;
    printf("enter #1: ");
    scanf("%d", &num1);
    printf("enter #2: ");
    scanf("%d", &num2);

    op = gcd(num1, num2);
    printf("%d", op);
    return 0;
}
