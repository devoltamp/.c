/* as soon as the code starts -- 3 files namely
stdin, stdout, stderr*/

#include <stdio.h>
#define getchar() getc(stdin)
#define putchar(c) putc((c), stdout)
/* they are there no need to explicitly define them */


int main(){

    FILE *fp;
    fp = fopen("hello.txt", "r");

    if (fp == NULL){
        puts("could not find the file!");
        return -1;
    }

    int c;
    while ((c = getc(fp)) != EOF){
        putc(c, stdout);
    }

    /* stdout saves the day -- without that the error would be too few arguments */
    fclose(fp);
    return 0;
}
