#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>

// so the assigning values won't work
int main(){
    unsigned short int a = 0;

    while (1) {
        a = a + 1;
        // Sleep(1);
        printf("a=%d\n",a);

    }
    return 0;
}
