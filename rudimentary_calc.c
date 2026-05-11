// rudimentary calculator
#include <stdio.h>

#define MAXLINE 100

// getline is not working so writing up the custom once
int get(char s[], int lim){

    int c, i;
    int j = 0;

    for (j = 0; j<MAXLINE; j++)
        printf("%c", s[j]);

    while (--lim > 0 && (c = getchar() != EOF && c != '\n'))
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    // total bs

    return i; // being the line
}


int main(void){

    // three var defines f'ns too
    double sum, atof(char s[]);
    char line[] = {"hello there"};
    int get(char line[], int max);

    sum = 0;
    while (get(line, MAXLINE) > 0) // i > 0
        printf("\t%g\n", sum += atof(line));
    return 0;

}
