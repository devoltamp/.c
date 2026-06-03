/* strepped down version of printf */
#include <stdio.h>
#include <stdarg.h>

void minprintf(char *fmt, ...){

    // char *ap;
    va_list ap;
    char *sval;
    int ival;
    double dval;

    va_start(ap, fmt);      /* does the start out */
    for (char *p = fmt; *p; p++){
        /* the source of error */
        if (*p != '%'){
            putchar(*p);
            continue;
        }

        switch(*++p){
            case 'd':
                ival = va_arg(ap, int);
                printf("%d", ival);
                break;
            case 'f':
                dval = va_arg(ap, double);
                printf("%f", dval);
                break;
            case 's':
                for (sval = va_arg(ap, char *); *sval; sval++){
                    putchar(*sval);
                }
                break;
            default:
                putchar(*p);
                break;
        }
    }
    va_end(ap);
}

int main(){
    minprintf("Name: %s, ID: %d\n", "dev", 00);
    return 0;
}

/* the ... means that the numbers and the types of the arguments are not known
all the va -- things are the macros in the stdargs.h
a lot of the things are done via putchar -- i guess made that a little more complex */
