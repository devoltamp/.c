/* simple buffered version */
#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

int _getchar(void){

    char buf[BUFSIZ];
    char *bufp;
    int n = 0;


    /* buffer empty */
    if (n == 0){        
        n = read(0, buf, sizeof buf);
        bufp = buf;
    }

    if (n <= 0){
        return EOF;
    }
    

    /* to print the bufp */
    while (n > 0){
        printf("%c", *bufp);
        bufp++;
        n--;
    }
    // printf("\n");

    return 0;
}

int main(){

    _getchar();
    return 0;
}