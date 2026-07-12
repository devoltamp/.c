/* binary version was suppose to be small
but it's reverse of that.
decimal to bin. --> bin to str. -->
str. to dec.
-- toit */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void bin(){
    int remainder, result = 0, multiplier = 1;
    int input;
    printf("enter a decimal number: ");
    scanf("%d",&input);

    while(input){
        remainder = input%2;
        result = remainder*multiplier + result;
        multiplier*=10;
        input/=2;
    }

    /* conv. into string */
    char str[12];
    snprintf(str, sizeof(str), "%d", result);
    char temp = str[0];
    str[0] = '0';
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    str[i] = temp;
    str[i+1] = '\0';

    /* bin. to dec */
    char binstr[strlen(str)];
    int j = 0;
    while (str[j] != '\0'){
        binstr[j] = str[j];
        j++;
    }
    char *endptr;
    unsigned long long decimalval = strtoull(binstr, &endptr, 2);

    /* o/p */
    printf("Org. Binary: %d\n", result);
    printf("Binary: %s\n", binstr);
    printf("Ans: %llu", decimalval);
}

int main() {

    bin();
    return 0;
}
