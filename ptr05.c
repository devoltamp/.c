/* passing the value to a f'n via an pointer add */
#include <stdio.h>

void hola(int *a){
    for (int i = 0; i<10; i++){
        a[i] = i;
        printf("%d\t%d\n", a[i], &a[i]);
        /* if looked closely it takes four steps since int takes four bits -- pretty cool */
    }

}

int main(){

    int a[10];
    int *pa;

    pa = &a[0];
    pa = a;

    /*
    >> both are same
    &a[i]
    a + i

    pa[i]
    *(pa + i)

    pa = a; pa++;   >> this is valid cause pa is a variable to a pointer
    a = pa; a++;    >> this is not valid caluse a is an array you can't just ++ an array


    */
    hola(a);
    return 0;
}
