#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

// pattern that will be searching for
char pattern[] = "ould";
// char temp[100];

// get: get line into s and return the length
int get(char s[], int lim){

    int c, i;
    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';

    return i;

}

// strindex: return index of t in s, and -1 if none
int strindex(char s[], char t[]){

    int i,j,k;

    for (i = 0; s[i] != '\0'; i++)
        // there are two var both of them are in one sigle loop
        // and the loop actually does not do anything
        for (j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k>0 && t[k] == '\0')
            return i;

    for (int q = 0; q != EOF; q++)
        // temp[q] = s[i];
        printf("%c", s[q]);

    return -1;
}

int main(){

    char line[MAXLINE];
    int found = 0;

    printf("enter the para: \n");
    while (get(line, MAXLINE) > 0) // meaning i > 0
        if (strindex(line, pattern) >= 0){
            printf("%s", line);
            found ++;
        }

    return found;
}
