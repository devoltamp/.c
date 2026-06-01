/* for the bit scanf -- that would not work */
#include <stdio.h>

struct noice{
    unsigned int a : 5;
};

int main(){

    struct noice no;
    int temp;
    puts("enter the value of a: ");
    scanf("%d", &temp);
    no.a = temp;        /* sill the add. could not be assigned */
    printf("%d\n", no.a);
    return 0;
}
