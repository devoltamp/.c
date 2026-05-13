// usage of the scope
// var being the variable
#include <stdio.h>

int a, b;           // global var
void f(void);

int main(){

    a = 5;
    b = 7;
    printf("in the main: a = %d & b = %d\n", a, b);
    f();
    printf("\n");
    printf("after the call: a = %d & b = %d\n", a, b);

    return 0;
}

void f(void){

    int a;          // local var
    int b;          // if b initialized both becomes local & both gets updated
    a = 15;
    b = 17;         // still global
    printf("int the function: a = %d & b = %d", a, b);

}
