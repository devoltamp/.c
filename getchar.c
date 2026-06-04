/* only one single char. 
without the buffer */

#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

int _getchar(void){

    char c;
    if (read(0, &c, 1) == 1){
        return (unsigned char) c;
    }
    return EOF;
}

int main(){

    _getchar();
    printf("%d\n", _getchar());
    printf("%d\n", BUFSIZ);     /* 8192 */

    return 0;
}