/* 50 - 50 understanding
getch()
ungetch() are not written from scrach */

#include <stdio.h>
#include <ctype.h>


int getch(void);
void ungetch (int *);

/* getint: get next integer from input into *pn */
int getint(int *pn) {
    int c, sign;

    /* skip white space */
    while (isspace(c = getch()))
        ;

    /* checks the other things */
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(&c);
        return 0;
    }

    /* handle the sign */
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-') {
        c = getch();
    }

    /* collect integer digits */
    *pn = 0;
    while (isdigit(c)) {
        *pn = 10 * (*pn) + (c - '0');
        c = getch();
    }
    *pn *= sign;

    // idk
    if (c != EOF) {
        ungetch(&c);
    }


    // as soon as i press any char the code will stop
    return c;
    /* returns EOF or the character that stopped the reading */
}

int main() {
    int val = 0;
    printf("enter an integer: ");

    int result = getint(&val);

    if (result > 0 || val != 0) {
        printf("successfully read integer: %d\n", val);
    } else {
        printf("not a valid integer input.\n");
    }

    return 0;
}
