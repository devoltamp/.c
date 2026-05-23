/* the code will return the name of the month depending upon the i/p
now the codes are getting pretty useful */

#include <stdio.h>

/* just as a f'n but declared as a pointer
and the arguments are still the same way */
char *monthname(int n){

    static char *name[] = {
        "illegal month", "january", "february", "march", "april",
        "may", "june", "july", "august", "september", "october",
        "november", "december"
    };

    return (n < 1 || n > 12) ? name[0] : name[n];
}

int main(){

    int n;
    puts("enter a #n: ");
    scanf("%d", &n);

    printf("%s\n", monthname(n));
    return 0;
}
