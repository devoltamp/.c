#include <stdio.h>

void move(int n, char source, char dest, char spare){

    if (n == 1){
        printf("move from %c to %c\n", source, dest);
    }
    else{
        /* just like the recursive note below */
        move(n-1, source, spare, dest);
        move(1, source, dest, spare);
        move(n-1, spare, dest, source);
    }
}

int main(){

    int n;
    printf("enter the #n of rings: ");
    scanf("%d", &n);
    move(n, 'A', 'C', 'B');
    return 0;
}
/* base case: A to C keeping B as spare
1. n-1 rings from A to B
2. remaining one A to C
3. n-1 rings from B to c
*/
