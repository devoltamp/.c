/* turned 20 still nothing to be proud */
#include <stdio.h>
#include <windows.h>

int main(){
    char b[] = "happy birthday to me!";
    int i = 0;
    while (b[i] != '\0'){
        printf("%c", b[i]);
        i++;
        Sleep(50);
    }
    return 0;
}
