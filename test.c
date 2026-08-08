/* idk but thought why not make a simple prog. that can do it for me
https://www.cs.yale.edu/homes/aspnes/pinewiki/C(2f)Randomization.html
*/
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

/* test - 1 */
void _commit(){
    srand(time(NULL));
    char *phrases[] = {
        "-",
        "idk",
        "meh",
        "apn",
        "check out the comments"
        "get a life"
        "please work"
    };
    int len = sizeof(phrases) / sizeof(phrases[0]);
    int index = rand() % len;

    char buf[100];
    sprintf(buf, "git commit -m """);
    // char s = 'c';
    system("git commit -m ", """s""");
}

int main(){

    _commit();
    return 0;
}
