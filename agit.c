/* idk but thought why not make a simple prog. that can do it for me
https://www.cs.yale.edu/homes/aspnes/pinewiki/C(2f)Randomization.html
*/
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

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
    sprintf(buf, "git commit -m \"%s\"", phrases[index]);
    system(buf);
}

int main(){

    // system("git add .\\test.c");
    system("git add .");
    _commit();
    system("git push");
    return 0;
}
