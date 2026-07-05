#include <stdio.h>

int _exp(int x, int y){

    if (y == 0){
        return 1;
    }
    else{
        return(x * _exp(x, y-1));
    }
}

int main(){

    int num1, num2, op;
    printf("enter #1: ");
    scanf("%d", &num1);
    printf("enter #2: ");
    scanf("%d", &num2);

    op = _exp(num1, num2);
    printf("%d", op);
    return 0;
}
