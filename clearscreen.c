// to clear up the cmd 

#include <stdio.h>
#include <windows.h>

void clearscreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main(){
    clearscreen();
    return 0;
}
